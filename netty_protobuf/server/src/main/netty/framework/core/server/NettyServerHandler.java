package netty.framework.core.server;

import org.apache.log4j.Logger;

import netty.framework.core.ProtobufParser;
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
	}

	@Override
	public void channelRegistered(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Server : channelRegistered");
	}
	
	@Override
	public void channelActive(ChannelHandlerContext ctx) {
		logger.debug("Server : channelActive");
		
	}
	
	/*
	 * 接受客户端的消息
	 */
	
	@Override
	public void channelRead(ChannelHandlerContext ctx, Object msg)
			throws Exception {
		
		logger.debug("Server : channelRead");

		ProtobufParser.parer(ctx, msg);
	}

	@Override
	public void channelReadComplete(ChannelHandlerContext ctx) throws Exception {
		ctx.flush();
		
		logger.debug("Server : channelReadComplete");
	}
	
	/*
	 */
	@Override
	public void handlerRemoved(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Server : handlerRemoved");
	}
	
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

	@Override
	public void userEventTriggered(ChannelHandlerContext ctx, Object evt)
			throws Exception {
		logger.debug("Server : userEventTriggered");
	}

	@Override
	public void exceptionCaught(ChannelHandlerContext ctx, Throwable cause) {
		cause.printStackTrace();
		ctx.close();// 发生异常，关闭链路
		
		logger.debug("Server : exceptionCaught");
	}
}
