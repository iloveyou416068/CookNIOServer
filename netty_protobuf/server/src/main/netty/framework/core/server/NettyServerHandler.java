package netty.framework.core.server;

import org.apache.log4j.Logger;

import netty.framework.core.ProtobufParser;
import io.netty.channel.ChannelHandler.Sharable;
import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.ChannelInboundHandlerAdapter;

@Sharable
public class NettyServerHandler extends ChannelInboundHandlerAdapter {

	private final static Logger logger = Logger.getLogger(NettyServerHandler.class);
	
	@Override
	public void handlerAdded(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Server : handlerAdded ");
		ctx.writeAndFlush("123");
	}

	@Override
	public void handlerRemoved(ChannelHandlerContext ctx) throws Exception {
		logger.debug("Server : handlerRemoved");
	}

	@Override
	public void channelRead(ChannelHandlerContext ctx, Object msg)
			throws Exception {
		logger.debug("Server : channelRead");
		
		ProtobufParser.parer(ctx, msg);
	}


	@Override
	public void exceptionCaught(ChannelHandlerContext ctx, Throwable cause) {
		cause.printStackTrace();
		ctx.close();// 发生异常，关闭链路
		
		logger.debug("Server : exceptionCaught");
	}
}
