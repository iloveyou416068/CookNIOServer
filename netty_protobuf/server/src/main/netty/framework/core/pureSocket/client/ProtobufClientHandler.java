package netty.framework.core.pureSocket.client;

import java.net.InetSocketAddress;
import java.net.SocketAddress;

import netty.framework.core.pureSocket.Session;
import netty.framework.core.router.RouterFacoty;
import netty.framework.core.router.spec.EvevntMessage;

import org.apache.log4j.Logger;

import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.ChannelInboundHandlerAdapter;

public class ProtobufClientHandler extends ChannelInboundHandlerAdapter {

	private final static Logger logger = Logger.getLogger(ProtobufClientHandler.class);

	private final static boolean isDebug = false;
	
	@Override
	public void handlerAdded(ChannelHandlerContext ctx) throws Exception {
		if(isDebug)
			logger.debug("Client : handlerAdded ");
	}

	@Override
	public void channelActive(ChannelHandlerContext ctx) {
		logger.debug("Client : channelActive");
		
		if(ClientSessionCache.INSTANCE.isNull()) {
			Session session = new Session();
			session.setContext(ctx);
			SocketAddress address = ctx.channel().remoteAddress();
			InetSocketAddress in = (InetSocketAddress)address;
			String key = in.getHostName() + ":" + in.getPort();
			ClientSessionCache.INSTANCE.put(key, session);
//			logger.debug("add server session : " + key);
		}
		
	}


	@Override
	public void channelRead(ChannelHandlerContext ctx, Object msg)
			throws Exception {
		
		logger.debug("Client : channelRead");

		EvevntMessage message = EvevntMessage.newProtobufMessage(ctx, msg);
		
		RouterFacoty.newSinglethreadRouter().router(message);
		
		
	}

	@Override
	public void channelReadComplete(ChannelHandlerContext ctx) throws Exception {
		ctx.flush();
		
		if(isDebug)
			logger.debug("Client : channelReadComplete");
		
	}
	
	@Override
	public void handlerRemoved(ChannelHandlerContext ctx) throws Exception {
		if(isDebug)
			logger.debug("Client : handlerRemoved");
		// TODO
	}

	@Override
	public void channelInactive(ChannelHandlerContext ctx) throws Exception {
		if(isDebug)
			logger.debug("Client : channelInactive");
		
	}

	@Override
	public void channelRegistered(ChannelHandlerContext ctx) throws Exception {
		if(isDebug)
			logger.debug("Client : channelRegistered");
		
	}

	@Override
	public void channelUnregistered(ChannelHandlerContext ctx) throws Exception {
		if(isDebug)
			logger.debug("Client : channelUnregistered");
		
	}

	@Override
	public void channelWritabilityChanged(ChannelHandlerContext ctx)
			throws Exception {
		if(isDebug)
			logger.debug("Client : channelWritabilityChanged");
		
	}

	@Override
	public void userEventTriggered(ChannelHandlerContext ctx, Object evt)
			throws Exception {
		if(isDebug)
			logger.debug("Client : userEventTriggered");
		
	}

	@Override
	public boolean isSharable() {
		if(isDebug)
			logger.debug("Client : isSharable");
		return super.isSharable();
	}
	
	@Override
	public void exceptionCaught(ChannelHandlerContext ctx, Throwable cause) {
		cause.printStackTrace();
		ctx.close();
		
		if(isDebug)
			logger.debug("Client : exceptionCaught");
		
	}
}
