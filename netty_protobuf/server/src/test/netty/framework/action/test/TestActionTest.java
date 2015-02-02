package netty.framework.action.test;

import netty.framework.MockServer;
import netty.framework.MockSession;
import netty.framework.messages.MsgId.MsgID;
import netty.framework.messages.TestMessage.TestRequest;

import org.junit.Test;

public class TestActionTest {

	@Test
	public void test() {
		MockSession session = MockServer.start();
		
		TestRequest test = TestRequest.newBuilder()
				.setMsgID(MsgID.TEST)
				.build();

		session.write(test, test.getMsgID());
	}
}
