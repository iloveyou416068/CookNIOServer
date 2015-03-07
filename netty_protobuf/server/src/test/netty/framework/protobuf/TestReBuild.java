package netty.framework.protobuf;

import netty.framework.messages.TestMessage;
import netty.framework.messages.MsgId.MsgID;
import netty.framework.messages.TestMessage.OuterTest;
import netty.framework.messages.TestMessage.OuterTest.Builder;
import netty.framework.messages.TestMessage.TestRequest;

import org.junit.Assert;
import org.junit.Test;

public class TestReBuild {

	@Test
	public void test() {
		TestMessage.TestRequest request = TestMessage.TestRequest.newBuilder()
				.setMsgID(MsgID.TEST)
				.setData1(1)
				.setData2(2)
				.build();
		
		Assert.assertEquals(1, request.getData1());
		Assert.assertEquals(2, request.getData2());
		
		Builder outer = OuterTest.newBuilder()
		.setRequest(request);
		
		TestRequest re = outer.getRequest();
		Assert.assertEquals(1, re.getData1());
		Assert.assertEquals(2, re.getData2());
		
	}
}
