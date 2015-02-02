package netty.framework.dao;

import java.util.List;

import netty.framework.bean.Test;
import netty.framework.core.spring.SpringContext;

import org.mybatis.spring.support.SqlSessionDaoSupport;

/**
 * 通过mybatis执行到dao操作
 * @author Administrator
 *
 */
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
	
	public List<Test> select() {
		return getSqlSession().selectList(NAMESPACE + ".selectAll");
	}
	
}
