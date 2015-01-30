package netty.framework.core.pureSocket.router;

import io.netty.channel.ChannelHandlerContext;

import java.util.concurrent.BlockingQueue;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.LinkedTransferQueue;

import netty.framework.core.pureSocket.ProtobufParse;

import org.apache.log4j.Logger;

public class MultithreadRouter {

	private static final Logger logger = Logger.getLogger(MultithreadRouter.class);
	
	// TODO 考虑使用何种阻塞队列
	private final BlockingQueue<EvevntMessage> msgs = new LinkedTransferQueue<>();
	// TODO 考虑使用何种线程池
	private final ExecutorService pool = Executors.newCachedThreadPool();
	
	MultithreadRouter () {
		
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
	
	public void asyncRoute(ChannelHandlerContext ctx, Object msg) {
		try {
			EvevntMessage message = new EvevntMessage();
			message.ctx = ctx;
			message.msg = msg;
			
			msgs.put(message);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
	}
	
	private static class RouterRunnable implements Runnable {

		EvevntMessage message;
		
		RouterRunnable(EvevntMessage message) {
			this.message = message;
		}
		
		@Override
		public void run() {
			ProtobufParse.parse(message.ctx, message.msg);
		}
		
	}
	
	private static class EvevntMessage {
		ChannelHandlerContext ctx;
		Object msg;
	}
}
