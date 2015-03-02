package netty.framework.core.pureSocket;

import java.util.concurrent.TimeUnit;

import netty.framework.messages.TestMessage;
import netty.framework.messages.MessagerMessage.MessagerRequest;
import netty.framework.messages.MsgId.MsgID;


public class TestProtobufClient {
	
	public static void main(String[] args) {
		ProtobufClient.INSTANCE.connect("localhost", 8080);
		
		TestMessage.TestRequest request = TestMessage.TestRequest.newBuilder()
				.setMsgID(MsgID.TEST)
				.build();
		
		MessagerRequest messageResult = MessagerRequest.newBuilder()
				.setMsgID(MsgID.TEST)
				.setContent(request.toByteString())
				.build();
		
		try {
			TimeUnit.SECONDS.sleep(2);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		
		SocketSession session = SocketSessionCache.INSTANCE.get("localhost:8080");
		session.write(messageResult);
	}
}
