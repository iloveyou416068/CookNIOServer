package netty.framework.core.server;

import com.google.protobuf.MessageLite;

import netty.framework.messages.MessagerMessage;
import netty.framework.messages.MsgId.MsgID;
import netty.framework.action.AbstractAtction;
import netty.framework.core.CoreCache;
import io.netty.channel.ChannelHandler.Sharable;
import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.ChannelInboundHandlerAdapter;

@Sharable
public class NettyServerHandler extends ChannelInboundHandlerAdapter {

	
	@Override
	public void handlerAdded(ChannelHandlerContext ctx) throws Exception {
		System.out.println("handlerAdded");
	}

	@Override
	public void handlerRemoved(ChannelHandlerContext ctx) throws Exception {
		System.out.println("handlerRemoved");
	}

	@Override
	public void channelRead(ChannelHandlerContext ctx, Object msg)
			throws Exception {
		
		// 解析最外层的protobuf
		MessagerMessage.MessagerRequest req = (MessagerMessage.MessagerRequest) msg;
		// 获取业务层消息号和消息内容
		MsgID msgId = req.getMsgID();
		byte[] bytes = req.getContent().asReadOnlyByteBuffer().array();
		
		// 根据消息号找到解析器,然后解析消息内容
		MessageLite parser = CoreCache.INSTANCE.getParser(msgId.getNumber());
		MessageLite message = parser.getParserForType().parseFrom(bytes);
		
		// 执行业务逻辑
		AbstractAtction<MessageLite> executor = CoreCache.INSTANCE.getExecutor(msgId.name());
		MessageLite result = executor.execute(message);
		
		// 向客户端返回消息
		ctx.writeAndFlush(result);
		
		System.out.println("channelRead");
	}


	@Override
	public void exceptionCaught(ChannelHandlerContext ctx, Throwable cause) {
		cause.printStackTrace();
		ctx.close();// 发生异常，关闭链路
	}
}
