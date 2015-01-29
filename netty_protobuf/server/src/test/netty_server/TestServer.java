package netty_server;

import netty.framework.core.pureSocket.server.ProtobufServer;

public class TestServer {

	public static void main(String[] args) {
		ProtobufServer.INSTANCE.start(8080);
	}
}
