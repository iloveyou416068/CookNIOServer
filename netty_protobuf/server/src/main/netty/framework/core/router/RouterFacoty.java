package netty.framework.core.router;

import netty.framework.core.router.spec.AkkaActorRouter;
import netty.framework.core.router.spec.DisruptorRouter;
import netty.framework.core.router.spec.KilimRouter;
import netty.framework.core.router.spec.MultithreadRouter;
import netty.framework.core.router.spec.SinglethreadRouter;

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
}
