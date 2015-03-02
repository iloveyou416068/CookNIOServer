package netty.framework.command;

import netty.framework.core.parser.HttpParamaters;

/**
 * 执行Http请求
 * 
 * @author wangming
 *
 */
public abstract class AbstractCommand {

	public abstract Object execute(HttpParamaters param);
}
