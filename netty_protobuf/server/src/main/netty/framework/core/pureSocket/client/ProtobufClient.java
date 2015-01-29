package netty.framework.core.pureSocket.client;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

import org.apache.log4j.Logger;

import netty.framework.messages.MessagerMessage;
import netty.framework.messages.MessagerMessage.MessagerRequest;
import io.netty.bootstrap.Bootstrap;
import io.netty.channel.ChannelFuture;
import io.netty.channel.ChannelInitializer;
import io.netty.channel.ChannelOption;
import io.netty.channel.EventLoopGroup;
import io.netty.channel.nio.NioEventLoopGroup;
import io.netty.channel.socket.SocketChannel;
import io.netty.channel.socket.nio.NioSocketChannel;
import io.netty.handler.codec.protobuf.ProtobufDecoder;
import io.netty.handler.codec.protobuf.ProtobufEncoder;
import io.netty.handler.codec.protobuf.ProtobufVarint32FrameDecoder;
import io.netty.handler.codec.protobuf.ProtobufVarint32LengthFieldPrepender;

/**
 * netty socket 客户端连接
 * 
 * 必须在向远端发送消息时,提前发起connect连接,要不然会产生空指针异常
 * 
 * XXX 目前只要连接完毕,就会断开连接,在新的线程里，没有wait
 * 
 * @author Administrator
 *
 */
public enum ProtobufClient {

	INSTANCE;
	
	private final ExecutorService executor = Executors.newCachedThreadPool();
	
	private static final Logger logger = Logger.getLogger(ProtobufClient.class);
	
	public void connect(String host, int port) {
		
		executor.execute(new NettyRunnable(host, port));
		
		logger.debug("connect : " + host + ":" + port);
	}

	private static class NettyRunnable implements Runnable{

		private final int port;
		private final String host;
		
		protected NettyRunnable(String host, int port) {
			this.host = host;
			this.port = port;
		}
		
		@Override
		public void run() {
			try{
				// 配置客户端NIO线程组
				EventLoopGroup group = new NioEventLoopGroup();
				try {
					Bootstrap b = new Bootstrap();
					b.group(group).channel(NioSocketChannel.class)
							.option(ChannelOption.TCP_NODELAY, true)
							.handler(new ChannelInitializer<SocketChannel>() {
								@Override
								public void initChannel(SocketChannel ch)
										throws Exception {
									ch.pipeline().addLast(new ProtobufVarint32FrameDecoder());
									ch.pipeline().addLast(new ProtobufVarint32LengthFieldPrepender());
									MessagerRequest req = MessagerMessage.MessagerRequest.getDefaultInstance();
									ch.pipeline().addLast(new ProtobufDecoder(req)); // ProtobufDecoder解码器
									ch.pipeline().addLast(new ProtobufEncoder()); // ProtobufDecoder编码器
									ch.pipeline().addLast(new ProtobufClientHandler());
								}
							});

					// 发起异步连接操作
					ChannelFuture f = b.connect(host, port).sync();

					logger.debug("connect " + host + ":" + port);
					
					// 阻塞, 等待客户端链路关闭
					f.channel().closeFuture().sync();
					logger.debug("closeFuture");
					
				} finally {
					// 释放NIO线程组
					logger.info("Client shutdownGracefully");
					group.shutdownGracefully();
				}
			} catch(final Exception e) {
				e.printStackTrace();
			}
			
		} 
		
	}
	
}
