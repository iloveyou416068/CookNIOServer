package netty_server;

import netty.framework.core.client.NettyClient;

public class TestClient {

	public static void main(String[] args) {
		try {
			NettyClient.INSTANCE.connect();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}
