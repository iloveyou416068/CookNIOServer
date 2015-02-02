package netty.framework.action.test;

import java.util.concurrent.TimeUnit;

import netty.framework.MockServer;
import netty.framework.MockSession;

import org.junit.Test;

public class TestInactive {

	@Test
	public void test() {
		MockSession session = MockServer.start();
		
		try {
			TimeUnit.SECONDS.sleep(100);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
	}
}
