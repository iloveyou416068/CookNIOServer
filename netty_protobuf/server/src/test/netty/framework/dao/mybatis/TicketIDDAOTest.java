package netty.framework.dao.mybatis;

import netty.framework.MockServer;

import org.junit.Assert;
import org.junit.Test;

public class TicketIDDAOTest {

	@Test
	public void test32ID() {
		
		MockServer.start();
		
		int id = TicketIDDAO.getInstance().getId32("ticket32_a");
		Assert.assertEquals(1, id);
	}
}
