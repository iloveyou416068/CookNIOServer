package netty.framework.action.test;

import netty.framework.MockServer;
import netty.framework.messages.MsgId.MsgID;
import netty.framework.messages.TestMessage.TestRequest;
import netty.framework.messages.TestMessage.TestResponse;

import org.junit.Assert;
import org.junit.Test;

public class TestActionTest {

	@Test
	public void test() {
		MockServer server = MockServer.start();
		
		TestRequest test = TestRequest.newBuilder()
				.setMsgID(MsgID.TEST)
				.build();

		TestResponse response = (TestResponse)server.execute(MsgID.TEST, test);
		Assert.assertEquals(MsgID.TEST, response.getMsgID());
	}
	
}
