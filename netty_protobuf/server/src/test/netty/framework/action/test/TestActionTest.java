package netty.framework.action.test;

import netty.framework.MockServer;
import netty.framework.MockSession;
import netty.framework.messages.MsgId.MsgID;
import netty.framework.messages.TestMessage.TestRequest;

import org.junit.Ignore;
import org.junit.Test;

public class TestActionTest {

	@Test
//	@Ignore
	public void test() {
		MockSession session = MockServer.start();
		
		TestRequest test = TestRequest.newBuilder()
				.setMsgID(MsgID.TEST)
				.build();

		session.write(test, test.getMsgID());
	}
	
//	TODO 使用Juint无法跑通单元测试,但是可以使用main方法来运行, 找到在Juint中 线程自动中断的原因
//	
//	public static void main(String[] args) {
//		MockSession session = MockServer.start();
//
//		TestRequest test = TestRequest.newBuilder().setMsgID(MsgID.TEST)
//				.build();
//
//		session.write(test, test.getMsgID());
//	}
}
