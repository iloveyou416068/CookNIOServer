package netty.framework.dao.jdbc;

import org.junit.Assert;
import org.junit.Test;

public class testIDQuery {

	@Test
	public void test() {
		int id = IDQuery.queryMaxID("test");
		Assert.assertEquals(1, id);
	}
}
