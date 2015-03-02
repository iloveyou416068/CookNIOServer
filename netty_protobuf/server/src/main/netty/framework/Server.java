package netty.framework;

import netty.framework.core.CoreCache;
import netty.framework.core.http.HttpServerFactory;
import netty.framework.core.pureSocket.ProtobufServerFactory;
import netty.framework.core.spring.SpringContext;
import netty.framework.monitors.C3P0Monitor;

public class Server {

	public static void main(String[] args) {
		
		SpringContext.INSTANCE.getApplicationContext();
		
		CoreCache.INSTANCE.init();
		
		C3P0Monitor.INSTANCE.monitor();

		HttpServerFactory.INSTANCE.start("test", 9090);
		
		ProtobufServerFactory.INSTANCE.start(8080);
	}
}
