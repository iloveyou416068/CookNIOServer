package netty.framework.core.pureSocket.client;

import java.net.InetSocketAddress;
import java.net.SocketAddress;
import java.util.concurrent.CountDownLatch;

import netty.framework.core.pureSocket.ProtobufParser;
import netty.framework.core.pureSocket.Session;

import org.apache.log4j.Logger;

import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.ChannelInboundHandlerAdapter;

public class NettyClientHandler extends ChannelInboundHandlerAdapter {

	private final static Logger logger = Logger.getLogger(NettyClientHandler.class);

	private final static boolean isDebug = false;
	
	// TODO 考虑并发
	private final CountDownLatch latch;
	
	public NettyClientHandler(CountDownLatch latch) {
		this.latch = latch;
	}
	
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
			latch.countDown();
			logger.debug("Client : add session : " + ctx.channel().localAddress().toString() + "  " + System.currentTimeMillis());
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
		
		if(isDebug)
			logger.debug("Client : channelReadComplete");
		
		ctx.fireChannelReadComplete();
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
		
		ctx.fireChannelInactive();
	}

	@Override
	public void channelRegistered(ChannelHandlerContext ctx) throws Exception {
		if(isDebug)
			logger.debug("Client : channelRegistered");
		
		ctx.fireChannelRegistered();
	}

	@Override
	public void channelUnregistered(ChannelHandlerContext ctx) throws Exception {
		if(isDebug)
			logger.debug("Client : channelUnregistered");
		
		ctx.fireChannelUnregistered();
	}

	@Override
	public void channelWritabilityChanged(ChannelHandlerContext ctx)
			throws Exception {
		if(isDebug)
			logger.debug("Client : channelWritabilityChanged");
		
		ctx.fireChannelWritabilityChanged();
	}

	@Override
	public void userEventTriggered(ChannelHandlerContext ctx, Object evt)
			throws Exception {
		if(isDebug)
			logger.debug("Client : userEventTriggered");
		
		ctx.fireUserEventTriggered(evt);
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
		
		ctx.fireExceptionCaught(cause);
	}
}
