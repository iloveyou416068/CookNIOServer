package netty.framework.core.net;

import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public enum SessionCache {

	INSTANCE;
	
	private final Map<Long, Session> sessions = new ConcurrentHashMap<>();
	
	public void put(long roleId, Session session) {
		sessions.put(roleId, session);
	}
	
	public Session get(long roleId) {
		return sessions.get(roleId);
	}
}
