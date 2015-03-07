package netty.framework.command.test;

import netty.framework.command.AbstractCommand;
import netty.framework.core.parser.HttpParamaters;

public class TestCommand extends AbstractCommand {


	@Override
	public String execute(HttpParamaters param) {
		for (String key : param.parameters.keySet()) {
			System.out.println("TestCommand " + key);
		}
		return "test response";
	}

}
