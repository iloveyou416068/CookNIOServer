package com.minaprotobuf.mina;

import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

import org.apache.mina.core.service.IoHandlerAdapter;
import org.apache.mina.core.session.IoSession;
import org.apache.mina.filter.logging.MdcInjectionFilter;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import com.google.protobuf.MessageLite;

/**
 *
 */
public class ProtocolHandler extends IoHandlerAdapter {

	private final static Logger LOGGER = LoggerFactory
			.getLogger(ProtocolHandler.class);

	/**
	 *
	 */
	private final Set<IoSession> sessions = Collections
			.synchronizedSet(new HashSet<IoSession>());

	/**
	 *
	 */
	private final Set<String> users = Collections
			.synchronizedSet(new HashSet<String>());

	/**
	 *
	 */
	@Override
	public void exceptionCaught(IoSession session, Throwable cause) {
		LOGGER.warn("Unexpected exception.", cause);
		session.close(true);
	}

	/**
	 *
	 */
	@Override
	public void messageReceived(IoSession session, Object message) {
		Logger log = LoggerFactory.getLogger(ProtocolHandler.class);

		log.info("received: " + message);
		String user = (String) session.getAttribute("user");

		MessageLite theMessage = (MessageLite) message;


		session.write("QUIT OK");
		session.close(true);

		sessions.add(session);

		session.setAttribute("user", user);
		MdcInjectionFilter.setProperty(session, "user", user);

	}

	public void broadcast(String message) {
		synchronized (sessions) {
			for (IoSession session : sessions) {
				if (session.isConnected()) {
					session.write("BROADCAST OK " + message);
				}
			}
		}
	}

	/**
	 *
	 */
	@Override
	public void sessionClosed(IoSession session) throws Exception {
		String user = (String) session.getAttribute("user");
		users.remove(user);
		sessions.remove(session);
		broadcast("The user " + user + " has left the chat session.");
	}

	/**
	 *
	 */
	public boolean isChatUser(String name) {
		return users.contains(name);
	}

	/**
	 *
	 */
	public int getNumberOfUsers() {
		return users.size();
	}

	/**
	 *
	 */
	public void kick(String name) {
		synchronized (sessions) {
			for (IoSession session : sessions) {
				if (name.equals(session.getAttribute("user"))) {
					session.close(true);
					break;
				}
			}
		}
	}
}
