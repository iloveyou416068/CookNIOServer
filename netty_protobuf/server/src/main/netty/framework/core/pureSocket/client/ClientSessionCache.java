package netty.framework.core.pureSocket.client;

import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

import netty.framework.core.pureSocket.Session;

public enum ClientSessionCache {

	INSTANCE;
	
	private Map<String, Session> sessions = new ConcurrentHashMap<>();
	
	/**
	 * 
	 * @param key
	 * @param session
	 * @return
	 */
	public Session put(String key, Session session) {
		return sessions.put(key, session);
	}
	
	public Session get(String key) {
		return sessions.get(key);
	}
	
	public boolean isNull() {
		return sessions.isEmpty();
	}
}
