package netty.framework.core.http.server;

import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.SimpleChannelInboundHandler;
import io.netty.handler.codec.http.FullHttpRequest;
import netty.framework.EvevntMessage;
import netty.framework.core.router.Router;
import netty.framework.core.router.RouterFacoty;

import org.apache.log4j.Logger;

public class HttpServerHandler extends
		SimpleChannelInboundHandler<FullHttpRequest> {
	
	private static final Logger logger = Logger.getLogger(HttpServerHandler.class);
	
	private final Router router;
	
	public HttpServerHandler() {
		router = RouterFacoty.newSinglethreadRouter();
	}
	
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
		router.router(message);
	}

}
