package netty.framework.dao;

import netty.framework.core.spring.SpringContext;

import org.mybatis.spring.support.SqlSessionDaoSupport;

public class TestDAO  extends SqlSessionDaoSupport {

	private static final String NAMESPACE = TestDAO.class.getCanonicalName();

	// 单例
	private static TestDAO INSTANCE = null;

	public static TestDAO getInstance() {
		if (INSTANCE == null) {
			INSTANCE = SpringContext.INSTANCE.getApplicationContext()
					.getBean("testDAO", TestDAO.class);
		}

		return INSTANCE;
	}
}
