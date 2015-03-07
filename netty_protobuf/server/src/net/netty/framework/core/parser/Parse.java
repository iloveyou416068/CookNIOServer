package netty.framework.core.parser;

import netty.framework.core.EvevntMessage;

public interface Parse {

	public Object parse(EvevntMessage event);
}
