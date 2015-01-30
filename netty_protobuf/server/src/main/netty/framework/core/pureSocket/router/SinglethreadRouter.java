package netty.framework.core.pureSocket.router;

import org.apache.log4j.Logger;

import io.netty.channel.ChannelHandlerContext;
import netty.framework.core.pureSocket.ProtobufParse;

public class SinglethreadRouter {

	private static final Logger logger = Logger
			.getLogger(SinglethreadRouter.class);

	public void syncRoute(ChannelHandlerContext ctx, Object msg) {
		ProtobufParse.parse(ctx, msg);
	}

}
