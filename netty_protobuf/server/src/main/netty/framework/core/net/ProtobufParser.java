package netty.framework.core.net;

import org.apache.log4j.Logger;

import io.netty.channel.ChannelHandlerContext;
import netty.framework.action.AbstractAction;
import netty.framework.messages.MessagerMessage;
import netty.framework.messages.MsgId.MsgID;
import netty.framework.util.JsonTool;

import com.google.protobuf.InvalidProtocolBufferException;
import com.google.protobuf.MessageLite;
import com.google.protobuf.Parser;

public class ProtobufParser {

	private static final Logger logger = Logger.getLogger(ProtobufParser.class);
	
	public static void parer(ChannelHandlerContext ctx, Object msg) {
		
		// 解析最外层的protobuf
		MessagerMessage.MessagerRequest req = (MessagerMessage.MessagerRequest) msg;
		// 获取业务层消息号和消息内容
		MsgID msgId = req.getMsgID();
		byte[] bytes = req.getContent().toByteArray();
		System.out.println(bytes);
		// 根据消息号找到解析器,然后解析消息内容
		Parser requestParser = CoreCache.INSTANCE.getRequestParserBy(msgId.getNumber());
		MessageLite message = null;
		try {
			logger.debug("ParseMessage : " + msgId);
			message = (MessageLite)requestParser.parseFrom(bytes);
			logger.info(JsonTool.toJson(message));
		} catch (InvalidProtocolBufferException e) {
			e.printStackTrace();
		}

		// 执行业务逻辑
		AbstractAction<MessageLite> action = CoreCache.INSTANCE.getExecutor(msgId.name());
		MessageLite result = action.execute(message);
		
//		MessageLite responseParser = CoreCache.INSTANCE.getResponseParserBy(msgId.getNumber());
//		responseParser.
		
		// 向客户端返回消息
		ctx.writeAndFlush(result.toByteArray());
	}
}
