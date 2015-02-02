package netty.framework;

import java.util.concurrent.TimeUnit;

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
		
		try {
			// TODO 找到Junit中 线程中断的原因，不使用sleep
			TimeUnit.SECONDS.sleep(2);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		
		
	}
}
