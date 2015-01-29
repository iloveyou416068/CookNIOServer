package netty.framework;

import netty.framework.core.CoreCache;
import netty.framework.core.pureSocket.server.ProtobufServer;
import netty.framework.core.spring.SpringContext;

public class MockServer {

	public static void start() {
		
		SpringContext.INSTANCE.getApplicationContext();
		
		CoreCache.INSTANCE.init();
		
		ProtobufServer.INSTANCE.start(9898);
		
	}
}
