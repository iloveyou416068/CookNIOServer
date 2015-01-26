package netty.framework.core.net.client;

import netty.framework.core.net.ProtobufParser;
import netty.framework.core.net.Session;

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
		
		if(ClientSessionCache.INSTANCE.isNull()) {
			Session session = new Session();
			session.setContext(ctx);
			ClientSessionCache.INSTANCE.put(session);
			logger.debug("Client : add session : " + ctx.channel().localAddress().toString());
		}
		
		ctx.fireChannelActive();
	}


	@Override
	public void channelRead(ChannelHandlerContext ctx, Object msg)
			throws Exception {
		
		logger.debug("Client : channelRead");

		ProtobufParser.parer(ctx, msg);
		
		ctx.fireChannelRead(msg);
	}

	@Override
	public void channelReadComplete(ChannelHandlerContext ctx) throws Exception {
		ctx.flush();
		
		logger.debug("Client : channelReadComplete");
		
		ctx.fireChannelReadComplete();
	}
	
	@Override
	public void handlerRemoved(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Client : handlerRemoved");
		// TODO
	}

	@Override
	public void channelInactive(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Client : channelInactive");
		
		ctx.fireChannelInactive();
	}

	@Override
	public void channelRegistered(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Client : channelRegistered");
		
		ctx.fireChannelRegistered();
	}

	@Override
	public void channelUnregistered(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Client : channelUnregistered");
		
		ctx.fireChannelUnregistered();
	}

	@Override
	public void channelWritabilityChanged(ChannelHandlerContext ctx)
			throws Exception {
		logger.debug("Client : channelWritabilityChanged");
		
		ctx.fireChannelWritabilityChanged();
	}

	@Override
	public void userEventTriggered(ChannelHandlerContext ctx, Object evt)
			throws Exception {
		logger.debug("Client : userEventTriggered");
		
		ctx.fireUserEventTriggered(evt);
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
		
		ctx.fireExceptionCaught(cause);
	}
}
