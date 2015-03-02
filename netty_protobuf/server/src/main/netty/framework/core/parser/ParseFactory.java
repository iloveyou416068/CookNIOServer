package netty.framework.core.parser;

import netty.framework.EvevntMessage;
import netty.framework.EvevntMessage.MessageType;

public class ParseFactory {

	private static final Parse httpParse = new HttpParser();
	private static final Parse protobufParse = new ProtobufParse();
	
	public static Object parse(EvevntMessage message) {
		
		if(message.getMessageType() == MessageType.HTTP)
			return httpParse.parse(message);
		else if(message.getMessageType() == MessageType.PROTOBUF)
			return protobufParse.parse(message);
		
		throw new RuntimeException("Error Event Type : " + message.getMessageType());
	} 
}
