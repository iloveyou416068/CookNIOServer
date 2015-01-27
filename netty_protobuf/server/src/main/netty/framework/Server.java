package netty.framework;

import netty.framework.core.net.CoreCache;
import netty.framework.core.net.server.NettyServer;
import netty.framework.core.spring.SpringContext;
import netty.framework.monitors.C3P0Monitor;

public class Server {

	public static void main(String[] args) {
		
		SpringContext.INSTANCE.getApplicationContext();
		
		CoreCache.INSTANCE.init();
		
		NettyServer.INSTANCE.start();
		
		C3P0Monitor.INSTANCE.monitor();
	}
}
