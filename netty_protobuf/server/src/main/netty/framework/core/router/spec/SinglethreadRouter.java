package netty.framework.core.router.spec;

import org.apache.log4j.Logger;

import netty.framework.EvevntMessage;
import netty.framework.core.parser.ParseFactory;
import netty.framework.core.router.Router;

public class SinglethreadRouter extends Router {

	private static final Logger logger = Logger
			.getLogger(SinglethreadRouter.class);

	@Override
	public void route (EvevntMessage message) {
		ParseFactory.getParse(message).parse(message);
	}

}
