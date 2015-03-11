package netty.framework.common;

import org.junit.Ignore;
import org.junit.Test;

public class TestTicketIDFactory {

	@Test
	public void testA() {
		int id = TicketIDFactory.A.get32ID();
		System.out.println("A:" + id);
	}
	
	@Test
	@Ignore
	public void testB() {
		int id = TicketIDFactory.B.get32ID();
		System.out.println("B:" + id);
	}
}
