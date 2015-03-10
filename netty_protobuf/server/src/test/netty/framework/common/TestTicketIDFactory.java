package netty.framework.common;

import org.junit.Test;

public class TestTicketIDFactory {

	@Test
	public void test() {
		int id = TicketIDFactory.A.get32ID();
		System.out.println(id);
	}
}
