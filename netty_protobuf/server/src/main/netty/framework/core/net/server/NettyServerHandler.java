package netty.framework.core.net.server;

import org.apache.log4j.Logger;

import netty.framework.core.net.ProtobufParser;
import netty.framework.core.net.Session;
import io.netty.channel.ChannelHandler.Sharable;
import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.ChannelInboundHandlerAdapter;

@Sharable
public class NettyServerHandler extends ChannelInboundHandlerAdapter {

	private final static Logger logger = Logger.getLogger(NettyServerHandler.class);
	
	/*
	 * 当客户端连接之后 Handler依次执行的是  isSharable(), handlerAdded(), channelRegistered(), channelActive()
	 */
	
	@Override
	public boolean isSharable() {
		logger.debug("Server : isSharable");
		return super.isSharable();
	}
	
	@Override
	public void handlerAdded(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Server : handlerAdded ");
		// TODO
	}

	@Override
	public void channelRegistered(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Server : channelRegistered");
		
		ctx.fireChannelRegistered();
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
		
		ctx.fireChannelActive();
	}
	
	/*
	 * 接受客户端的消息
	 */
	
	@Override
	public void channelRead(ChannelHandlerContext ctx, Object msg)
			throws Exception {
		
		logger.debug("Server : channelRead");

		ProtobufParser.parer(ctx, msg);
		
		ctx.fireChannelRead(msg);
	}

	@Override
	public void channelReadComplete(ChannelHandlerContext ctx) throws Exception {
		ctx.flush();
		
		logger.debug("Server : channelReadComplete");
		
		ctx.fireChannelReadComplete();
	}
	
	/*
	 */
	@Override
	public void handlerRemoved(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Server : handlerRemoved");
		// TODO
	}
	
	@Override
	public void channelInactive(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Server : channelInactive");
		
		ctx.fireChannelInactive();
	}

	@Override
	public void channelUnregistered(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Server : channelUnregistered");
		
		ctx.fireChannelUnregistered();
	}

	@Override
	public void channelWritabilityChanged(ChannelHandlerContext ctx)
			throws Exception {
		logger.debug("Server : channelWritabilityChanged");
		
		ctx.fireChannelWritabilityChanged();
	}

	@Override
	public void userEventTriggered(ChannelHandlerContext ctx, Object evt)
			throws Exception {
		logger.debug("Server : userEventTriggered");
		
		ctx.fireUserEventTriggered(evt);
	}

	@Override
	public void exceptionCaught(ChannelHandlerContext ctx, Throwable cause) {
		cause.printStackTrace();
		ctx.close();// 发生异常，关闭链路
		
		logger.debug("Server : exceptionCaught");
		
		ctx.fireExceptionCaught(cause);
	}
}
