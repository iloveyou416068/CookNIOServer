package netty.framework.core.pureSocket.server;

import java.net.SocketAddress;

import org.apache.log4j.Logger;

import netty.framework.core.pureSocket.Session;
import netty.framework.core.router.Router;
import netty.framework.core.router.RouterFacoty;
import netty.framework.core.router.spec.EvevntMessage;
import io.netty.channel.ChannelHandler.Sharable;
import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.ChannelInboundHandlerAdapter;

@Sharable
public class ProtobufServerHandler extends ChannelInboundHandlerAdapter {

	private final static Logger logger = Logger.getLogger(ProtobufServerHandler.class);
	
	private final static boolean isDebug = false;
	/*
	 * 当客户端连接之后 Handler依次执行的是  isSharable(), handlerAdded(), channelRegistered(), channelActive()
	 */
	
	private final Router router;
	
	public ProtobufServerHandler() {
		router = RouterFacoty.newSinglethreadRouter();
	}
	
	@Override
	public boolean isSharable() {
		if(isDebug)
			logger.debug("Server : isSharable");
		return super.isSharable();
	}
	
	@Override
	public void handlerAdded(ChannelHandlerContext ctx) throws Exception {
		if(isDebug)
			logger.debug("Server : handlerAdded ");
		// TODO
	}

	@Override
	public void channelRegistered(ChannelHandlerContext ctx) throws Exception {
		if(isDebug)
			logger.debug("Server : channelRegistered");
		
	}
	
	@Override
	public void channelActive(ChannelHandlerContext ctx) {
		if(isDebug)
			logger.debug("Server : channelActive");
		
		String remote = ctx.channel().remoteAddress().toString();
		if(!ServerSessionCache.INSTANCE.contains(remote)) {
			Session session = new Session();
			session.setContext(ctx);
			ServerSessionCache.INSTANCE.put(remote, session);
			logger.debug("Server : addSession :" + remote);
		}
		
	}
	
	/*
	 * 接受客户端的消息
	 */
	
	@Override
	public void channelRead(ChannelHandlerContext ctx, Object msg)
			throws Exception {
		
		if(isDebug)
			logger.debug("Server : channelRead");
		
		EvevntMessage message = EvevntMessage.newProtobufMessage(ctx, msg);
		
		router.router(message);
		
	}

	@Override
	public void channelReadComplete(ChannelHandlerContext ctx) throws Exception {
		ctx.flush();
		
		if(isDebug)
			logger.debug("Server : channelReadComplete");
		
	}
	
	/*
	 */
	@Override
	public void handlerRemoved(ChannelHandlerContext ctx) throws Exception {
		if(isDebug)
			logger.debug("Server : handlerRemoved");
		// TODO
	}
	
	@Override
	public void channelInactive(ChannelHandlerContext ctx) throws Exception {
		if(isDebug)
			logger.debug("Server : channelInactive");
		
	}

	@Override
	public void channelUnregistered(ChannelHandlerContext ctx) throws Exception {
		if(isDebug)
			logger.debug("Server : channelUnregistered");
		
	}

	@Override
	public void channelWritabilityChanged(ChannelHandlerContext ctx)
			throws Exception {
		if(isDebug)
			logger.debug("Server : channelWritabilityChanged");
		
	}

	@Override
	public void userEventTriggered(ChannelHandlerContext ctx, Object evt)
			throws Exception {
		if(isDebug)
			logger.debug("Server : userEventTriggered");
		
	}

	@Override
	public void exceptionCaught(ChannelHandlerContext ctx, Throwable cause) {
		
		SocketAddress address = ctx.channel().remoteAddress();
		logger.error(address.toString() + " -- " + cause.getMessage());
		if(logger.isDebugEnabled())
			cause.printStackTrace();
		
		ctx.close();// 发生异常，关闭链路
	}
}
