package netty.framework;

import java.util.concurrent.TimeUnit;

import netty.framework.core.CoreCache;
import netty.framework.core.pureSocket.Session;
import netty.framework.core.pureSocket.client.ClientSessionCache;
import netty.framework.core.pureSocket.client.ProtobufClient;
import netty.framework.core.pureSocket.server.ProtobufServer;
import netty.framework.core.spring.SpringContext;

public class MockServer {

	public static MockSession start() {
		
		SpringContext.INSTANCE.getApplicationContext();
		
		CoreCache.INSTANCE.init();
		
		ProtobufServer.INSTANCE.start(9898);
		
		ProtobufClient.INSTANCE.connect("127.0.0.1", 9898);
		
		try {
			TimeUnit.SECONDS.sleep(5);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		
		Session session = ClientSessionCache.INSTANCE.get("127.0.0.1:9898");
		if(session == null)
			throw new RuntimeException("session is null");
		
		return new MockSession(session);
		
	}
}
