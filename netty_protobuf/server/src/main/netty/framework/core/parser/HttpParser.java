package netty.framework.core.parser;

import static io.netty.handler.codec.http.HttpHeaders.Names.CONTENT_TYPE;
import static io.netty.handler.codec.http.HttpMethod.GET;
import static io.netty.handler.codec.http.HttpResponseStatus.BAD_REQUEST;
import static io.netty.handler.codec.http.HttpResponseStatus.FORBIDDEN;
import static io.netty.handler.codec.http.HttpResponseStatus.METHOD_NOT_ALLOWED;
import static io.netty.handler.codec.http.HttpResponseStatus.OK;
import static io.netty.handler.codec.http.HttpVersion.HTTP_1_1;
import io.netty.buffer.ByteBuf;
import io.netty.buffer.Unpooled;
import io.netty.channel.ChannelFutureListener;
import io.netty.channel.ChannelHandlerContext;
import io.netty.handler.codec.http.DefaultFullHttpResponse;
import io.netty.handler.codec.http.FullHttpRequest;
import io.netty.handler.codec.http.FullHttpResponse;
import io.netty.handler.codec.http.HttpResponseStatus;
import io.netty.util.CharsetUtil;

import java.io.UnsupportedEncodingException;
import java.net.URLDecoder;

import netty.framework.EvevntMessage;
import netty.framework.command.AbstractCommand;
import netty.framework.core.CoreCache;
import netty.framework.core.http.HttpParamaters;
import netty.framework.util.JsonTool;

import org.apache.log4j.Logger;

public class HttpParser implements Parse{

	private static final Logger logger = Logger.getLogger(HttpParser.class);

	public void parse(EvevntMessage event) {
		FullHttpRequest request = event.getRequest();
		ChannelHandlerContext ctx = event.getCtx();

		final String uri = request.getUri();
		//
		if (!request.getDecoderResult().isSuccess()) {
			sendError(ctx, BAD_REQUEST, uri);
			return;
		}
		if (request.getMethod() != GET) {
			sendError(ctx, METHOD_NOT_ALLOWED, uri);
			return;
		}

		final HttpParamaters param = parseUri(ctx, uri);
		logger.info(uri + "\n" + JsonTool.toJson(param));

		AbstractCommand command = CoreCache.INSTANCE.getCommand(param.scheme,
				param.parameters.get("command"));
		if (command == null) {
			sendError(ctx, FORBIDDEN, uri);
			return;
		}

		Object result = command.execute(param);
		logger.info("\n" + JsonTool.toJson(result));

		send(ctx, result);
	}

	private HttpParamaters parseUri(ChannelHandlerContext ctx, String uri) {

		HttpParamaters pams = new HttpParamaters();

		try {
			String parseUri = URLDecoder.decode(uri, "UTF-8");
			String[] arr1 = parseUri.split("\\?");
			if (arr1.length == 0) {
				// TODO

			} else if (arr1.length == 1) {
				pams.scheme = arr1[0];

			} else if (arr1.length == 2) {
				pams.scheme = arr1[0];
				String[] arr2 = arr1[1].split("&");
				for (String string : arr2) {
					String[] arr3 = string.split("=");
					pams.parameters.put(arr3[0], arr3[1]);
				}
			} else {
				// TODO
			}

			pams.ctx = ctx;
		} catch (UnsupportedEncodingException e) {
			e.printStackTrace();
		}

		if (pams.scheme == null || pams.scheme == ""
				|| pams.parameters.size() == 0)
			sendError(ctx, FORBIDDEN, uri);

		return pams;
	}

	/**
	 * 
	 * @param ctx
	 * @param status
	 */
	public void sendError(ChannelHandlerContext ctx,
			HttpResponseStatus status, String uri) {
		FullHttpResponse response = new DefaultFullHttpResponse(HTTP_1_1,
				status, Unpooled.copiedBuffer("失败: " + status.toString()
						+ " 找不到对应的请求处理\r\n检查URI ： " + JsonTool.toJson(uri),
						CharsetUtil.UTF_8));

		response.headers().set(CONTENT_TYPE, "text/plain; charset=UTF-8");
		ctx.writeAndFlush(response).addListener(ChannelFutureListener.CLOSE);
	}

	private void send(ChannelHandlerContext ctx, Object result) {
		FullHttpResponse response = new DefaultFullHttpResponse(HTTP_1_1, OK);
		response.headers().set(CONTENT_TYPE, "text/html; charset=UTF-8");
		StringBuilder buf = new StringBuilder((String) result);
		ByteBuf buffer = Unpooled.copiedBuffer(buf, CharsetUtil.UTF_8);
		response.content().writeBytes(buffer);
		buffer.release();
		ctx.writeAndFlush(response).addListener(ChannelFutureListener.CLOSE);
	}

}
