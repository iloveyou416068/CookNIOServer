package netty.framework.core.router.spec;

import java.util.concurrent.Executor;
import java.util.concurrent.Executors;

import org.apache.log4j.Logger;

import netty.framework.EvevntMessage;
import netty.framework.core.parser.ParseFactory;
import netty.framework.core.router.Router;

import com.lmax.disruptor.EventFactory;
import com.lmax.disruptor.EventHandler;
import com.lmax.disruptor.RingBuffer;
import com.lmax.disruptor.dsl.Disruptor;

public class DisruptorRouter extends Router{

	private static final Logger logger = Logger.getLogger(DisruptorRouter.class);
	
	private final static int POOL_SIZE = 100;
	private final RingBuffer<EvevntMessage> ringBuffer;
	
	public DisruptorRouter() {
		
		final Executor executor = Executors.newCachedThreadPool();
		final Disruptor<EvevntMessage> disruptor = new Disruptor<>(new Factory(), POOL_SIZE, executor);
		disruptor.handleEventsWith(new EvevntMessageHandler());
		disruptor.start();
		ringBuffer = disruptor.getRingBuffer();
		
	}
	
	@Override
	public void route(EvevntMessage message) {
		long sequence = ringBuffer.next();
		
		try {
			EvevntMessage event = ringBuffer.get(sequence);

		} finally {
			ringBuffer.publish(sequence);
		}
	}
	
	private static class Factory implements EventFactory<EvevntMessage> {

		@Override
		public EvevntMessage newInstance() {
			return new EvevntMessage();
		}
		
	}
	
	private static class EvevntMessageHandler implements EventHandler<EvevntMessage> {

		@Override
		public void onEvent(EvevntMessage event, long sequence, boolean endOfBatch)
				throws Exception {
			ParseFactory.getParse(event).parse(event);
		}
		
	}
}
