package netty.framework.core.net.client;

import org.apache.log4j.Logger;

import netty.framework.core.net.ProtobufParser;
import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.SimpleChannelInboundHandler;

/**
 * 目前不使用该handler作为解析器
 * @author Administrator
 *
 */
@Deprecated
public class SimpleNettyClientHandler  extends SimpleChannelInboundHandler<Object> {

	private final static Logger logger = Logger.getLogger(SimpleNettyClientHandler.class);
	
	@Override
	protected void channelRead0(ChannelHandlerContext ctx, Object msg)
			throws Exception {
		logger.debug("Server : channelRead");

		ProtobufParser.parer(ctx, msg);		
	}

}
