package netty.framework.core.net.client;

import org.apache.log4j.Logger;

import netty.framework.core.net.ProtobufParser;
import netty.framework.core.net.server.SimpleNettyServerHandler;
import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.SimpleChannelInboundHandler;

public class SimpleNettyClientHandler  extends SimpleChannelInboundHandler<Object> {

	private final static Logger logger = Logger.getLogger(SimpleNettyClientHandler.class);
	
	@Override
	protected void channelRead0(ChannelHandlerContext ctx, Object msg)
			throws Exception {
		logger.debug("Server : channelRead");

		ProtobufParser.parer(ctx, msg);		
	}

}
