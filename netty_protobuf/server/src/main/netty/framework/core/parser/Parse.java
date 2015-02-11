package netty.framework.core.parser;

import netty.framework.EvevntMessage;

public interface Parse {

	public Object parse(EvevntMessage event);
}
