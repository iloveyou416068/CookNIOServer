package netty.framework.core.net.server;

import org.apache.log4j.Logger;

import netty.framework.core.net.ProtobufParser;
import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.SimpleChannelInboundHandler;

public class SimpleNettyServerHandler extends SimpleChannelInboundHandler<Object> {

	private final static Logger logger = Logger.getLogger(SimpleNettyServerHandler.class);
	
	@Override
	protected void channelRead0(ChannelHandlerContext ctx, Object msg)
			throws Exception {
		
		logger.debug("Server : channelRead");

		ProtobufParser.parer(ctx, msg);
	}

}
