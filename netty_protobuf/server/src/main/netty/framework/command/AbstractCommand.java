package netty.framework.command;

import netty.framework.core.HttpParamaters;

/**
 * 执行Http请求
 * 
 * @author wangming
 *
 */
public abstract class AbstractCommand {

	public abstract String execute(HttpParamaters param);
}
