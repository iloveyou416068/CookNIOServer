package netty.framework.action;

import com.google.protobuf.MessageLite;


public abstract class AbstractAtction<T> {

	public abstract MessageLite execute(T param);
}
