package netty.framework.core.router;

import netty.framework.core.router.spec.AkkaActorRouter;
import netty.framework.core.router.spec.DisruptorRouter;
import netty.framework.core.router.spec.KilimRouter;
import netty.framework.core.router.spec.MultithreadRouter;
import netty.framework.core.router.spec.SinglethreadRouter;
import netty.framework.util.PropertiesConfig;

public class RouterFacoty {

	public static SinglethreadRouter newSinglethreadRouter() {
		return new SinglethreadRouter();
	}
	
	public static MultithreadRouter newMultithreadRouter() {
		return  new MultithreadRouter();
	}
	
	public static DisruptorRouter newDisruptorRouter() {
		return new DisruptorRouter();
	}
	
	public static AkkaActorRouter newAkkaActorRouter() {
		return new AkkaActorRouter();
	}
	
	public static KilimRouter newKilimRouter() {
		return new KilimRouter();
	}
	
	public static Router newRouterByProperties() {
		
		switch(PropertiesConfig.ROUTER_TYPE.value()) {
		case "SinglethreadRouter":
			return new SinglethreadRouter();
		case "MultithreadRouter":
			return new MultithreadRouter();
		case "DisruptorRouter":
			return new DisruptorRouter();
		case "AkkaActorRouter":
			return new AkkaActorRouter();
		case "KilimRouter":
			return new KilimRouter();
		}
		
		throw new RuntimeException("error type : " + PropertiesConfig.ROUTER_TYPE.value());
	}
}
