package netty_server;

import netty.framework.core.net.server.NettyServer;

public class TestServer {

	public static void main(String[] args) {
		NettyServer.INSTANCE.start();
	}
}
