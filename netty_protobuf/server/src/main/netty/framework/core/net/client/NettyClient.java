package netty.framework.core.net.client;

import java.util.concurrent.CountDownLatch;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

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
 * XXX 目前只要连接完毕,就会断开连接,在新的线程里，没有wait
 * 
 * @author Administrator
 *
 */
public enum NettyClient {

	INSTANCE;
	
	private final ExecutorService executor = Executors.newCachedThreadPool();
	
	public void connect() {
		
		CountDownLatch latch = new CountDownLatch(2);
		
		executor.execute(new ClientRunnable(latch));
		
		try {
			latch.await();
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
	}

	private static class ClientRunnable implements Runnable{

		private final CountDownLatch latch;
		
		protected ClientRunnable(CountDownLatch latch) {
			this.latch = latch;
		}
		
		@Override
		public void run() {
			try{
				int port = 8080;
				String host = "127.0.0.1";
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
									ch.pipeline().addLast(new NettyClientHandler(latch));
								}
							});

					// 发起异步连接操作
					ChannelFuture f = b.connect(host, port).sync();

					latch.countDown();
					
					// 阻塞, 等待客户端链路关闭
					f.channel().closeFuture().sync();
				} finally {
					// 优雅退出，释放NIO线程组
					System.out.println("Client shutdownGracefully");
					group.shutdownGracefully();
				}
			} catch(final Exception e) {
				e.printStackTrace();
			}
			
		} 
		
	}
	
}
