package netty.framework.dao.mybatis;

import java.util.List;

import netty.framework.MockServer;

import org.junit.Assert;
import org.junit.Test;

public class TestDAOTest {

	@Test
	public void test_() {
		MockServer.start();
		
		List<netty.framework.bean.Test> list = TestDAO.getInstance().select();
		Assert.assertEquals(1, list.size());
	}
}
