package netty.framework;

import com.google.protobuf.MessageLite;

import netty.framework.core.pureSocket.Session;
import netty.framework.messages.MessagerMessage.MessagerRequest;
import netty.framework.messages.MsgId.MsgID;

public class MockSession {

	private final Session session;
	
	public MockSession(Session session) {
		this.session = session;
	}
	
	public void write(MessageLite messageLite, MsgID id) {
		MessagerRequest message = MessagerRequest.newBuilder()
				.setMsgID(id)
				.setContent(messageLite.toByteString())
				.build();

		session.write(message);
	}
}
