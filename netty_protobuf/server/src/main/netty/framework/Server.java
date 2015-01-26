package netty.framework;

import netty.framework.core.net.CoreCache;
import netty.framework.core.net.server.NettyServer;
import netty.framework.core.spring.SpringContext;

public class Server {

	public static void main(String[] args) {
		
		NettyServer.INSTANCE.start();
		
		CoreCache.INSTANCE.init();
		
//		SpringContext.INSTANCE.getApplicationContext();
		
	}
}
