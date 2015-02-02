package netty.framework;

import java.util.concurrent.TimeUnit;

import netty.framework.core.CoreCache;
import netty.framework.core.pureSocket.Session;
import netty.framework.core.pureSocket.client.ClientSessionCache;
import netty.framework.core.pureSocket.client.ProtobufClient;
import netty.framework.core.pureSocket.server.ProtobufServerFactory;
import netty.framework.core.spring.SpringContext;

public class MockServer {

	public static MockSession start() {
		
		SpringContext.INSTANCE.getApplicationContext();
		
		CoreCache.INSTANCE.init();
		
		ProtobufServerFactory.INSTANCE.start(9898);
		
		ProtobufClient.INSTANCE.connect("127.0.0.1", 9898);
		
		try {
			// TODO 找到Junit中 线程中断的原因，不使用sleep
			TimeUnit.SECONDS.sleep(2);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		
		Session session = ClientSessionCache.INSTANCE.get("127.0.0.1:9898");
		if(session == null)
			throw new RuntimeException("session is null");
		
		return new MockSession(session);
		
	}
}
