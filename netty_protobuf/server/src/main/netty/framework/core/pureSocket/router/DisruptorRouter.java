package netty.framework.core.pureSocket.router;

import io.netty.channel.ChannelHandlerContext;

import java.util.concurrent.Executor;
import java.util.concurrent.Executors;

import org.apache.log4j.Logger;

import netty.framework.core.pureSocket.ProtobufParse;

import com.lmax.disruptor.EventFactory;
import com.lmax.disruptor.EventHandler;
import com.lmax.disruptor.RingBuffer;
import com.lmax.disruptor.dsl.Disruptor;

public class DisruptorRouter {

	private static final Logger logger = Logger.getLogger(DisruptorRouter.class);
	
	private final static int POOL_SIZE = 100;
	private final Executor executor = Executors.newCachedThreadPool();
	private final Disruptor<EvevntMessage> disruptor;
	private final RingBuffer<EvevntMessage> ringBuffer;
	
	DisruptorRouter() {
		
		disruptor = new Disruptor<>(new Factory(), POOL_SIZE, executor);
		disruptor.handleEventsWith(new EvevntMessageHandler());
		disruptor.start();
		ringBuffer = disruptor.getRingBuffer();
		
	}
	
	public void disrupteRouter(ChannelHandlerContext ctx, Object msg) {
		long sequence = ringBuffer.next();
		
		try {
			EvevntMessage event = ringBuffer.get(sequence);
			event.ctx = ctx;										
			event.msg = msg; 

		} finally {
			ringBuffer.publish(sequence);
		}
	}
	
	private static class EvevntMessage {
		ChannelHandlerContext ctx;
		Object msg;
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
			ProtobufParse.parse(event.ctx, event.msg);
		}
		
	}
}
