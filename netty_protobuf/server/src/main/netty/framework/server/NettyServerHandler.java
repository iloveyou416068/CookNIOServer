package netty.framework.server;

import netty.framework.MessagerMessage;
import netty.framework.MsgId.MsgID;
import io.netty.channel.ChannelHandler.Sharable;
import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.ChannelInboundHandlerAdapter;

@Sharable
public class NettyServerHandler extends ChannelInboundHandlerAdapter {

	
	@Override
	public void handlerAdded(ChannelHandlerContext ctx) throws Exception {
	}

	@Override
	public void handlerRemoved(ChannelHandlerContext ctx) throws Exception {
		super.handlerRemoved(ctx);
	}

	@Override
	public void channelRead(ChannelHandlerContext ctx, Object msg)
			throws Exception {
		MessagerMessage.MessagerRequest req = (MessagerMessage.MessagerRequest) msg;
		MsgID msgId = req.getMsgID();
		byte[] bytes = req.getContent().asReadOnlyByteBuffer().array();
		
		ctx.writeAndFlush("");
		
		System.out.println("channelRead");
	}


	@Override
	public void exceptionCaught(ChannelHandlerContext ctx, Throwable cause) {
		cause.printStackTrace();
		ctx.close();// 发生异常，关闭链路
	}
}
