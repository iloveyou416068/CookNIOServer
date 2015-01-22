package netty.framework.core.net.client;

import netty.framework.core.net.ProtobufParser;

import org.apache.log4j.Logger;

import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.ChannelInboundHandlerAdapter;

public class NettyClientHandler extends ChannelInboundHandlerAdapter {

	private final static Logger logger = Logger.getLogger(NettyClientHandler.class);
	
	public NettyClientHandler() {
	}
	
	@Override
	public void handlerAdded(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Client : handlerAdded ");
	}

	@Override
	public void channelActive(ChannelHandlerContext ctx) {
		logger.debug("Client : channelActive");
		ctx.writeAndFlush("helloworld2server");
	}


	@Override
	public void channelRead(ChannelHandlerContext ctx, Object msg)
			throws Exception {
		
		logger.debug("Client : channelRead");

		ProtobufParser.parer(ctx, msg);
	}

	@Override
	public void channelReadComplete(ChannelHandlerContext ctx) throws Exception {
		ctx.flush();
		
		logger.debug("Client : channelReadComplete");
	}
	
	@Override
	public void handlerRemoved(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Client : handlerRemoved");
	}

	@Override
	public void channelInactive(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Client : channelInactive");
	}

	@Override
	public void channelRegistered(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Client : channelRegistered");
	}

	@Override
	public void channelUnregistered(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Client : channelUnregistered");
	}

	@Override
	public void channelWritabilityChanged(ChannelHandlerContext ctx)
			throws Exception {
		logger.debug("Client : channelWritabilityChanged");
	}

	@Override
	public void userEventTriggered(ChannelHandlerContext ctx, Object evt)
			throws Exception {
		logger.debug("Client : userEventTriggered");
	}

	@Override
	public boolean isSharable() {
		logger.debug("Client : isSharable");
		return super.isSharable();
	}
	
	@Override
	public void exceptionCaught(ChannelHandlerContext ctx, Throwable cause) {
		cause.printStackTrace();
		ctx.close();
		
		logger.debug("Client : exceptionCaught");
	}
}
