package netty.framework.dao.mybatis;

import netty.framework.core.spring.SpringContext;

import org.mybatis.spring.support.SqlSessionDaoSupport;

public class TicketIDDAO extends SqlSessionDaoSupport {

	private static final String NAMESPACE = TicketIDDAO.class.getCanonicalName();

	// 单例
	private static TicketIDDAO INSTANCE = null;

	public static TicketIDDAO getInstance() {
		if (INSTANCE == null) {
			INSTANCE = SpringContext.INSTANCE.getApplicationContext()
					.getBean("ticketIDDAO", TicketIDDAO.class);
		}

		return INSTANCE;
	}
	
	public int getId32(String stub) {
		return getSqlSession().insert(NAMESPACE + ".getId32", stub);
	}
	
}
