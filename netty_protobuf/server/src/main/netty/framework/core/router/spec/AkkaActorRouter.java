package netty.framework.core.router.spec;

import akka.actor.ActorRef;
import akka.actor.ActorSystem;
import akka.actor.Inbox;
import akka.actor.Props;
import akka.actor.UntypedActor;
import netty.framework.core.router.Router;

public class AkkaActorRouter extends Router {

	private final ActorSystem system;

	private final ActorRef router;

	private final Inbox inbox;
	
	public AkkaActorRouter() {
		system = ActorSystem.create("AkkaActorRouter");
		router = system.actorOf(Props.create(RouteActor.class), "router");
		inbox = Inbox.create(system);
	}
	
	@Override
	public void router(EvevntMessage message) {
		
		router.tell(message, ActorRef.noSender());
		
		inbox.send(router, null);
	}

	
	private static class RouteActor extends UntypedActor {
		public void onReceive(Object message) {
		}
	}
	
	private static class ActionActor extends UntypedActor {
		public void onReceive(Object message) {
		}
	}
	
}
