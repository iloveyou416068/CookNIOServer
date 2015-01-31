package netty.framework.core.router.spec;

import io.netty.channel.ChannelHandlerContext;
import io.netty.handler.codec.http.FullHttpRequest;

public class EvevntMessage {

	
	private ChannelHandlerContext ctx;
	private Object msg;
	private FullHttpRequest request;
	private MessageType messageType;
	
	public ChannelHandlerContext getCtx() {
		return ctx;
	}
	public Object getMsg() {
		return msg;
	}
	public FullHttpRequest getRequest() {
		return request;
	}
	public MessageType getMessageType() {
		return messageType;
	}
	
	
	public static EvevntMessage newProtobufMessage(ChannelHandlerContext ctx, Object msg) {
		EvevntMessage message = new EvevntMessage();
		message.ctx = ctx;
		message.msg = msg;
		message.messageType = MessageType.PROTOBUF;
		
		return  message;
	}
	
	public static EvevntMessage newHttpMessage(ChannelHandlerContext ctx, FullHttpRequest request) {
		EvevntMessage message = new EvevntMessage();
		message.request = request;
		message.ctx = ctx;
		message.messageType = MessageType.HTTP;
		
		return  message;
	}
	
	public static enum MessageType {
		PROTOBUF,
		HTTP;
	}
}
