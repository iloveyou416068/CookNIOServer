package netty.framework.core.pureSocket.server;

import java.net.SocketAddress;

import org.apache.log4j.Logger;

import netty.framework.EvevntMessage;
import netty.framework.core.pureSocket.Session;
import netty.framework.core.router.Router;
import netty.framework.core.router.RouterFacoty;
import io.netty.channel.ChannelHandler.Sharable;
import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.ChannelInboundHandlerAdapter;

@Sharable
public class ProtobufServerHandler extends ChannelInboundHandlerAdapter {

	private final static Logger logger = Logger.getLogger(ProtobufServerHandler.class);
	
	private final Router router;
	
	public ProtobufServerHandler() {
		router = RouterFacoty.newMultithreadRouter();
	}
	
	/*
	 * 当客户端连接之后 Handler依次执行的是  isSharable(), handlerAdded(), channelRegistered(), channelActive()
	 */
	
	@Override
	public void handlerAdded(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Server : handlerAdded ");
	}

	@Override
	public void channelRegistered(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Server : channelRegistered");
		
	}
	
	@Override
	public void channelActive(ChannelHandlerContext ctx) {
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
		
		logger.debug("Server : channelRead");
		
		EvevntMessage message = EvevntMessage.newProtobufMessage(ctx, msg);
		
		router.router(message);
		
	}

	@Override
	public void channelReadComplete(ChannelHandlerContext ctx) throws Exception {
		ctx.flush();
		
	}
	
	/*
	 */
	@Override
	public void handlerRemoved(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Server : handlerRemoved");
		// TODO
	}
	
	/**
	 * TCP连接在关闭前的调用方法
	 */
	@Override
	public void channelInactive(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Server : channelInactive");
		
	}

	@Override
	public void channelUnregistered(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Server : channelUnregistered");
		
	}

	@Override
	public void channelWritabilityChanged(ChannelHandlerContext ctx)
			throws Exception {
		logger.debug("Server : channelWritabilityChanged");
		
	}

	/**
	 * TODO 
	 * userEventTriggered通常用于自定义事件的处理，其中IdleState就是一种。
	 * 
	 * 除了常见的Channel事件外，如果要扩展出自己的事件处理，就是调用这个方法的。
	 * 要触发，就调用这个方法就好：fireUserEventTriggered(Object)
	 */
	@Override
	public void userEventTriggered(ChannelHandlerContext ctx, Object evt)
			throws Exception {
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
