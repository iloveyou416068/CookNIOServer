package netty_server;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

import org.junit.Ignore;
import org.junit.Test;

import netty.framework.core.pureSocket.Session;
import netty.framework.core.pureSocket.client.ClientSessionCache;
import netty.framework.core.pureSocket.client.ProtobufClient;
import netty.framework.messages.MessagerMessage.MessagerRequest;
import netty.framework.messages.MsgId.MsgID;
import netty.framework.messages.TestMessage.TestRequest;

public class TestClient {

	@Test
	@Ignore
	public void test_once() {
		try {
			ProtobufClient.INSTANCE.connect("127.0.0.1", 8080);
			
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
	
	@Test
//	@Ignore
	public void sendMessage() {
		try {
			ProtobufClient.INSTANCE.connect("127.0.0.1", 8080);
			
			Session session = ClientSessionCache.INSTANCE.get("127.0.0.1:8080");

			TestRequest test = TestRequest.newBuilder()
			.setMsgID(MsgID.TEST)
			.build();
			
			MessagerRequest message = MessagerRequest.newBuilder()
			.setMsgID(MsgID.TEST)
			.setContent(test.toByteString())
			.build();
			
			session.write(message);

		} catch (Exception e) {
			e.printStackTrace();
		}
	}
	
	@Test
	@Ignore
	public void test_1000() {
		ExecutorService pool = Executors.newCachedThreadPool();
		for(int i = 0; i < 5000; i++) {
//			pool.execute(new ClientConnect());
			Thread t = new Thread(new ClientConnect());
			t.start();
		}
	}
	
	class ClientConnect implements Runnable {

		@Override
		public void run() {
			try {
				ProtobufClient.INSTANCE.connect("127.0.0.1", 8080);
			} catch (Exception e) {
				e.printStackTrace();
			}
		}
		
	}
}
