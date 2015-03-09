package netty.framework.common;

import java.util.concurrent.atomic.AtomicLong;

import netty.framework.dao.jdbc.IDQuery;

/**
 * ID最后四位作为服务器标识符, 即便如此ID的最大值也达到了1M(Long最大值去掉最后四位)
 * 
 * @author wangming
 *
 */
public enum IDFactory {

	test("test");
	
	private AtomicLong id;
	
	IDFactory(String tableName) {
		id = new AtomicLong(IDQuery.query(tableName));
	}
	
	/**
	 * 考虑到并发问题,暂时先加把锁, TODO 待优化成更高效的方式
	 * @return
	 */
	public synchronized long increase() {
		long newValue = addTail(id.incrementAndGet()) ;
		id.set(newValue);
		return newValue;
	}
	
	private long addTail(long id) {
		return id * 10000 + ServerProperties.SERVER_ID.intValue() ;
	}
	
	public long get() {
		return id.intValue();
	}
}
