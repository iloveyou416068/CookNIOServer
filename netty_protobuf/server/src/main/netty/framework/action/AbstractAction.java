package netty.framework.action;

import com.google.protobuf.MessageLite;


public abstract class AbstractAction<T> {

	public abstract MessageLite execute(T param);
}
