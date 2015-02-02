package netty.framework.core.router;

import netty.framework.EvevntMessage;
import netty.framework.monitors.ServerStatistics;

public abstract class Router {

	public void router(EvevntMessage message) {
		ServerStatistics.ISNTANCE.statisticsNettyChannel(message);
		route(message);
	};
	
	public abstract void route(EvevntMessage message);
}
