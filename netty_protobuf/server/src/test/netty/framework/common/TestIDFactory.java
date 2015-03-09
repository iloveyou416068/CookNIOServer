package netty.framework.common;

import org.junit.Assert;
import org.junit.Test;

public class TestIDFactory {

	@Test
	public void test() {
		long id = IDFactory.test.get();
		Assert.assertEquals(1, id);
	}
	
	@Test
	public void testIncrease() {
		long id = IDFactory.test.increase();
		Assert.assertEquals(20001, id);
	}
	
	@Test
	public void printLongMaxValue() {
		System.out.println(Long.MAX_VALUE);
	}
}
