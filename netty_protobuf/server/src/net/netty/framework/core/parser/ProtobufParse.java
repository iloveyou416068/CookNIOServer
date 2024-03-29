package netty.framework.core.parser;

import org.apache.log4j.Logger;

import io.netty.channel.ChannelHandlerContext;
import netty.framework.action.AbstractAction;
import netty.framework.core.ActionCommandCache;
import netty.framework.messages.MessagerMessage;
import netty.framework.messages.MessagerMessage.MessagerRequest;
import netty.framework.messages.MsgId.MsgID;
import netty.framework.util.JsonTool;

import com.google.protobuf.InvalidProtocolBufferException;
import com.google.protobuf.MessageLite;
import com.google.protobuf.Parser;

public enum ProtobufParse {
	
	INSTANCE;
	
	private static final Logger logger = Logger
			.getLogger(ProtobufParse.class);
	
	public MessagerRequest parse(ChannelHandlerContext ctx, Object msg) {

		// 解析最外层的protobuf
		MessagerMessage.MessagerRequest messageRequest = (MessagerMessage.MessagerRequest) msg;

		// 获取业务层消息号和消息内容
		MsgID msgId = messageRequest.getMsgID();
		byte[] bytes = messageRequest.getContent().toByteArray();

		// 根据消息号找到解析器,然后解析消息内容
		Parser requestParser = ActionCommandCache.INSTANCE.getRequestParserBy(msgId.getNumber());
		MessageLite request = null;
		try {
			request = (MessageLite) requestParser.parseFrom(bytes);
		} catch (InvalidProtocolBufferException e) {
			e.printStackTrace();
		}

		// 执行业务逻辑
		logger.info("execute start -- " + msgId.name() + "(msgId:" + msgId.getNumber() + ")\n" + JsonTool.toJson(request));
		
		AbstractAction<MessageLite> action = ActionCommandCache.INSTANCE.getAction(msgId.name());
		MessageLite result = action.execute(request);

		logger.info("execute finshed -- " + msgId.name() + "(msgId:" + msgId.getNumber() + ")\n" + JsonTool.toJson(result));

		MessagerRequest messageResult = MessagerRequest.newBuilder()
				.setMsgID(msgId)
				.setContent(result.toByteString())
				.build();

		if(ctx != null)
			// 向客户端返回消息
			ctx.writeAndFlush(messageResult.toByteArray());
		
		return messageResult;
	}
}
