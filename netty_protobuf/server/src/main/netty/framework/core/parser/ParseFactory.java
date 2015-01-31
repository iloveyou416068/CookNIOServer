package netty.framework.core.parser;

import netty.framework.core.router.spec.EvevntMessage;
import netty.framework.core.router.spec.EvevntMessage.MessageType;

public class ParseFactory {

	private static final Parse httpParse = new HttpParser();
	private static final Parse protobufParse = new ProtobufParse();
	
	public static Parse getParse(EvevntMessage message) {
		
		if(message.getMessageType() == MessageType.HTTP)
			return httpParse;
		else if(message.getMessageType() == MessageType.PROTOBUF)
			return protobufParse;
		
		throw new RuntimeException("Error Event Type : " + message.getMessageType());
	} 
}
