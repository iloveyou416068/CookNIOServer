package netty_server;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

import org.junit.Ignore;
import org.junit.Test;

import com.google.protobuf.Parser;

import netty.framework.core.net.Session;
import netty.framework.core.net.client.ClientSessionCache;
import netty.framework.core.net.client.NettyClient;
import netty.framework.messages.MessagerMessage.MessagerRequest;
import netty.framework.messages.MsgId.MsgID;
import netty.framework.messages.TestMessage.TestRequest;

public class TestClient {

	@Test
//	@Ignore
	public void test_once() {
		try {
			NettyClient.INSTANCE.connect();
			
			Session session = ClientSessionCache.INSTANCE.get();

			TestRequest test = TestRequest.newBuilder()
			.setMsgID(MsgID.TEST)
			.build();
			
			MessagerRequest message = MessagerRequest.newBuilder()
			.setMsgID(MsgID.MESSAGER)
			.setContent(test.toByteString())
			.build();
			TestRequest.getDefaultInstance().getParserForType();
			session.write(message);

			System.out.println(test.toByteString());
			while(true){}
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
				NettyClient.INSTANCE.connect();
			} catch (Exception e) {
				e.printStackTrace();
			}
		}
		
	}
}
