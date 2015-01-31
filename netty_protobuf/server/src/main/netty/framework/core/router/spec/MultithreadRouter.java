package netty.framework.core.router.spec;

import java.util.concurrent.BlockingQueue;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.LinkedTransferQueue;

import netty.framework.core.parser.ParseFactory;
import netty.framework.core.parser.ProtobufParse;
import netty.framework.core.router.Router;

import org.apache.log4j.Logger;

public class MultithreadRouter extends Router {

	private static final Logger logger = Logger.getLogger(MultithreadRouter.class);
	
	// TODO 考虑使用何种阻塞队列
	private final BlockingQueue<EvevntMessage> msgs = new LinkedTransferQueue<>();
	// TODO 考虑使用何种线程池
	private final ExecutorService pool = Executors.newCachedThreadPool();
	
	public MultithreadRouter () {
		
		Thread thread = new Thread(new Runnable() {
			
			@Override
			public void run() {
				try {
					while(true) {
						EvevntMessage event = msgs.take();
						pool.execute(new RouterRunnable(event));
					}
				} catch (InterruptedException e) {
					e.printStackTrace();
				}
			}
		});
		
		thread.start();
	}
	
	@Override
	public void router(EvevntMessage message) {
		try {
			
			msgs.put(message);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
	}
	
	private static class RouterRunnable implements Runnable {

		EvevntMessage event;
		
		RouterRunnable(EvevntMessage message) {
			this.event = message;
		}
		
		@Override
		public void run() {
			ParseFactory.getParse(event).parse(event);
		}
		
	}
	
}
