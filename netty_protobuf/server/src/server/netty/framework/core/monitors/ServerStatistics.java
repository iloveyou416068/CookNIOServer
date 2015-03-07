package netty.framework.core.monitors;

import io.netty.channel.Channel;
import io.netty.channel.ChannelConfig;
import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.ChannelMetadata;
import netty.framework.core.EvevntMessage;

/**
 * 服务器统计
 * 1.protobuf消息执行时长
 * 2.http消息执行时长
 * 3.内存使用统计
 * 
 * TODO
 * @author wangming
 *
 */
public enum ServerStatistics {

	ISNTANCE;
	
	public void statisticsNettyChannel(EvevntMessage message) {
		
		switch(message.getMessageType()) {
		case PROTOBUF:
			statisticProtobuf(message.getCtx());
			break;
		case HTTP:
			break;
		default:
			throw new RuntimeException(message.getMessageType().name());
		}
		
	}
	
	private void statisticProtobuf(ChannelHandlerContext ctx) {
		Channel channel = ctx.channel();
		ChannelConfig config = channel.config();
		System.out.println("ConnectTimeoutMillis : " + config.getConnectTimeoutMillis());
		System.out.println("MaxMessagesPerRead : " + config.getMaxMessagesPerRead());
		System.out.println("WriteBufferHighWaterMark : " + config.getWriteBufferHighWaterMark());
		System.out.println("WriteBufferLowWaterMark : " + config.getWriteBufferLowWaterMark());
		System.out.println("WriteSpinCount : " + config.getWriteSpinCount());
		System.out.println("isAutoRead : " + config.isAutoRead());
		ChannelMetadata meatadata = channel.metadata();
		System.out.println("ServerStatistics : " + meatadata);
		
	}
}
