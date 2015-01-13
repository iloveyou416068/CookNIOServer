package netty.framework.core;

import io.netty.channel.ChannelHandlerContext;
import netty.framework.action.AbstractAtction;
import netty.framework.messages.MessagerMessage;
import netty.framework.messages.MsgId.MsgID;

import com.google.protobuf.InvalidProtocolBufferException;
import com.google.protobuf.MessageLite;

public class ProtobufParser {

	public static void parer(ChannelHandlerContext ctx, Object msg) {
		// 解析最外层的protobuf
		MessagerMessage.MessagerRequest req = (MessagerMessage.MessagerRequest) msg;
		// 获取业务层消息号和消息内容
		MsgID msgId = req.getMsgID();
		byte[] bytes = req.getContent().asReadOnlyByteBuffer().array();

		// 根据消息号找到解析器,然后解析消息内容
		MessageLite parser = CoreCache.INSTANCE.getParser(msgId.getNumber());
		MessageLite message = null;
		try {
			message = parser.getParserForType().parseFrom(bytes);
		} catch (InvalidProtocolBufferException e) {
			e.printStackTrace();
		}

		// 执行业务逻辑
		AbstractAtction<MessageLite> executor = CoreCache.INSTANCE.getExecutor(msgId.name());
		MessageLite result = executor.execute(message);

		// 向客户端返回消息
		ctx.writeAndFlush(result);
	}
}
