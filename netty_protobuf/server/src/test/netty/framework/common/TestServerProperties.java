package netty.framework.common;

import org.junit.Assert;
import org.junit.Test;

public class TestServerProperties {

	@Test
	public void test() {
		Assert.assertEquals("1", ServerProperties.SERVER_ID.value);
		Assert.assertEquals("jdbc:mysql://localhost/test", ServerProperties.MYSQL_URL.value);
	}
}
