package netty.framework.core.pureSocket.client;

import netty.framework.core.pureSocket.Session;

public enum ClientSessionCache {

	INSTANCE;
	
	private Session session;
	
	/**
	 * 
	 * @param key
	 * @param session
	 * @return
	 */
	public Session put(Session session) {
		return this.session = session;
	}
	
	public Session get() {
		return session;
	}
	
	public boolean isNull() {
		return session == null;
	}
}
