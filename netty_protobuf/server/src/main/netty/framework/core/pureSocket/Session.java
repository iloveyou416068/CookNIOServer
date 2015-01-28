package netty.framework.core.pureSocket;

import com.google.protobuf.MessageLite;

import io.netty.channel.ChannelHandlerContext;

public class Session {

	private ChannelHandlerContext context;

	public void setContext(ChannelHandlerContext context) {
		this.context = context;
	}
	
	public void write(Object msg) {
		context.writeAndFlush(msg);
	}
	
	public void write(MessageLite msg) {
		context.writeAndFlush(msg);
	}
}
