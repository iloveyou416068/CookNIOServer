package netty.framework.core.pureSocket.server;

import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

import netty.framework.core.pureSocket.Session;

public enum ServerSessionCache {

	INSTANCE;
	
	private final Map<String, Session> sessions = new ConcurrentHashMap<>();
	
	public void put(String roleId, Session session) {
		sessions.put(roleId, session);
	}
	
	public Session get(String roleId) {
		return sessions.get(roleId);
	}
	
	public boolean contains(String key) {
		return sessions.containsKey(key);
	}
}
