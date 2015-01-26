
package netty.framework.core.net.server;

import org.apache.log4j.Logger;

import netty.framework.messages.MessagerMessage;
import netty.framework.messages.MessagerMessage.MessagerRequest;
import io.netty.bootstrap.ServerBootstrap;
import io.netty.channel.ChannelFuture;
import io.netty.channel.ChannelInitializer;
import io.netty.channel.ChannelOption;
import io.netty.channel.ChannelPipeline;
import io.netty.channel.EventLoopGroup;
import io.netty.channel.nio.NioEventLoopGroup;
import io.netty.channel.socket.SocketChannel;
import io.netty.channel.socket.nio.NioServerSocketChannel;
import io.netty.handler.codec.protobuf.ProtobufDecoder;
import io.netty.handler.codec.protobuf.ProtobufEncoder;
import io.netty.handler.codec.protobuf.ProtobufVarint32FrameDecoder;
import io.netty.handler.codec.protobuf.ProtobufVarint32LengthFieldPrepender;
import io.netty.handler.logging.LogLevel;
import io.netty.handler.logging.LoggingHandler;

public enum NettyServer {

	INSTANCE;

	private final static Logger logger = Logger.getLogger(NettyServer.class);
	
	private boolean isStart = false;

	public void start() {

		if(isStart)
			throw new RuntimeException("Server Had Started!");
		isStart = true;

		int cpuSize = Runtime.getRuntime().availableProcessors();
		// 配置服务端的NIO线程组
		EventLoopGroup bossGroup = new NioEventLoopGroup();			// mainReactor负责监听server socket,accept新连接
		EventLoopGroup workerGroup = new NioEventLoopGroup(cpuSize);// subReactor负责多路分离已连接的socket,读写网 络数据,对业务处理功能,其扔给worker线程池完成

		try {
			ServerBootstrap b = new ServerBootstrap();
			b.group(bossGroup, workerGroup)
					.channel(NioServerSocketChannel.class)	// 设置nio类型的channel
					.option(ChannelOption.SO_BACKLOG, 100)
					.handler(new LoggingHandler(LogLevel.INFO))
					.childHandler(new ChannelInitializer<SocketChannel>() {	//有连接到达时会创建一个channel
						@Override
						public void initChannel(SocketChannel ch) {
							 // pipeline管理channel中的Handler,在channel队列中添加一个handler来处理业务
							ChannelPipeline pipeline = ch.pipeline();
							
							addHalfPacket(pipeline);
							addProtobuf(pipeline);
							addThreadpool(pipeline);
							
							pipeline.addLast(new NettyServerHandler());
//							pipeline.addLast(new SimpleNettyServerHandler());
						}
					});

			// 绑定端口,同步等待成功
			ChannelFuture f = null;
			try {
				logger.info("server started on 8080");
				// 配置完成,开始绑定server,通过调用sync同步方法阻塞直到绑定成功
				f = b.bind(8080).sync();
			} catch (InterruptedException e) {
				e.printStackTrace();
			}

			// 等待服务端监听端口关闭
			try {
				f.channel().closeFuture().sync();// 应用程序会一直等待,直到channel关闭
			} catch (InterruptedException e) {
				e.printStackTrace();
			}

		} finally {
			// 优雅退出,释放线程池资源 
			//关闭EventLoopGroup,释放掉所有资源包括创建的线程
			bossGroup.shutdownGracefully();
			workerGroup.shutdownGracefully();
		}
	}

	/**
	 * ProtobufVarint32FrameDecoder处理半包消息
	 * 此外还可使用LengthFieldBasedFrameDecoder通用半包解码器
	 * 或者继承ByteToMessageDecoder 自己处理半包消息
	 */
	private void addHalfPacket(ChannelPipeline pipeline) {
		pipeline.addLast(new ProtobufVarint32FrameDecoder());
		pipeline.addLast(new ProtobufVarint32LengthFieldPrepender());
	}
	
	/**
	 * 添加对Protobuf编解码支持
	 * @param pipeline
	 */
	private void addProtobuf(ChannelPipeline pipeline) {
		MessagerRequest req = MessagerMessage.MessagerRequest.getDefaultInstance();
		pipeline.addLast(new ProtobufDecoder(req)); // ProtobufDecoder解码器
		pipeline.addLast(new ProtobufEncoder()); // ProtobufDecoder编码器
	}
	
	/**
	 * Netty默认的Reactor模型只有MainReactor和SubReactor.
	 * ChannelHandler链的执行过程是在 SubReactor(workerGroup)中同步执行的,
	 * 所以如果业务处理handler耗时长,将严重影响可支持的并发数.这种模型适合于像Memcache这样的应用场景,
	 * 但 对需要操作数据库或者和其他模块阻塞交互的系统就不是很合适.
	 * 
	 * 当ChannelHandler需要线程池化的时候,可以通过在 ChannelPipeline中添加Netty内置的ChannelHandler实现类–ExecutionHandler实现.
	 * 对于ExecutionHandler需要的线程池模型,Netty提供了两种可 选：
	 * 1） MemoryAwareThreadPoolExecutor 可控制Executor中待处理任务的上限（超过上限时,后续进来的任务将被阻 塞）,并可控制单个Channel待处理任务的上限；
	 * 2） OrderedMemoryAwareThreadPoolExecutor 是  MemoryAwareThreadPoolExecutor 的子类,它还可以保证同一Channel中处理的事件流的顺序性,
	 *     这主要是控制事件在异步处 理模式下可能出现的错误的事件顺序,但它并不保证同一Channel中的事件都在一个线程中执行（通常也没必要）
	 *  
	 * 
	 */
	private void addThreadpool(ChannelPipeline pipeline) {
//		pipeline.addFirst(new ImmediateEventExecutor());
	}
}
