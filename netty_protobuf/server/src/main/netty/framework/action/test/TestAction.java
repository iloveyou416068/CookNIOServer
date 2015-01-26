package netty.framework.action.test;

import netty.framework.messages.MsgId.MsgID;
import netty.framework.messages.TestMessage.TestRequest;
import netty.framework.messages.TestMessage.TestResponse;
import netty.framework.action.AbstractAction;

public class TestAction extends AbstractAction<TestRequest> {

	@Override
	public TestResponse execute(TestRequest param) {
		System.out.println("TestExecutor : " + param.getMsgID());
		return TestResponse.newBuilder()
				.setMsgID(MsgID.TEST)
				.build();
	}

}
