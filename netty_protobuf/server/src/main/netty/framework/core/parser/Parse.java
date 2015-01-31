package netty.framework.core.parser;

import netty.framework.core.router.spec.EvevntMessage;

public interface Parse {

	public void parse(EvevntMessage event);
}
