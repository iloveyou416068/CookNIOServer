package netty.framework.action.test;

import java.util.concurrent.TimeUnit;

import netty.framework.MockServer;

import org.junit.Test;

public class TestInactive {

	@Test
	public void test() {
		MockServer server = MockServer.start();
		
		try {
			TimeUnit.SECONDS.sleep(100);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
	}
}
