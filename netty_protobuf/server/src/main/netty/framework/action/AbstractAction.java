package netty.framework.action;

import netty.framework.messages.MessagerMessage.MessagerRequest;
import netty.framework.messages.MsgId.MsgID;

import com.google.protobuf.MessageLite;


public abstract class AbstractAction<T> {

	public MessageLite execute(T param, MsgID msgId) {
	
		MessageLite result = execute(param);
		
		MessagerRequest message = MessagerRequest.newBuilder()
				.setMsgID(msgId)
				.setContent(result.toByteString())
				.build();
		
		return message;
	}
	
	public abstract MessageLite execute(T param);
}
