package netty.framework.core.handlers;

import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.SimpleChannelInboundHandler;
import io.netty.handler.codec.http.FullHttpRequest;
import netty.framework.core.EvevntMessage;
import netty.framework.core.parser.ParseFactory;

import org.apache.log4j.Logger;

public class HttpHandler extends
		SimpleChannelInboundHandler<FullHttpRequest> {
	
	private static final Logger logger = Logger.getLogger(HttpHandler.class);
	
	@Override
	public void exceptionCaught(ChannelHandlerContext ctx, Throwable cause)
			throws Exception {
		cause.printStackTrace();
		if (ctx.channel().isActive()) {
//			HttpParser.sendError(ctx, INTERNAL_SERVER_ERROR, "");
		}
	}

	@Override
	protected void channelRead0(ChannelHandlerContext ctx,
			FullHttpRequest request) throws Exception {
		
		EvevntMessage message = EvevntMessage.newHttpMessage(ctx, request);
		ParseFactory.parse(message);
	}

}
