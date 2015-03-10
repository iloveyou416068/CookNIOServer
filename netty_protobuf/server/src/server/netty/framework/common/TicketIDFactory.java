package netty.framework.common;

import netty.framework.dao.mybatis.TicketIDDAO;

/**
 * 仿照Flick Ticket Server实现
 * 不同的枚举代表着不同的表, 这样一来, 在拓充的时候, 只需要拓充枚举就好了
 * 
 * @author wangming
 *
 */
public enum TicketIDFactory {

	A("ticket32_a");
	
	TicketIDFactory(String table) {
		this.table = table;
	}
	
	private String table;
	
	public int get32ID() {
		return TicketIDDAO.getInstance().getId32(table);
	}
}
