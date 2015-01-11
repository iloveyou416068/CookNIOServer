/*
 * Copyright 2012 The Netty Project
 *
 * The Netty Project licenses this file to you under the Apache License,
 * version 2.0 (the "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at:
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */
package netty.framework.server;

import netty.nettyCodec.protobuf.protos.SubscribeReqProto;
import netty.nettyCodec.protobuf.protos.SubscribeReqProto.SubscribeReq;
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

	private boolean isStart = false;

	public void start() {

		if(isStart)
			throw new RuntimeException("Server Had Started!");
		isStart = true;

		// 配置服务端的NIO线程组
		EventLoopGroup bossGroup = new NioEventLoopGroup();
		EventLoopGroup workerGroup = new NioEventLoopGroup();

		try {
			ServerBootstrap b = new ServerBootstrap();
			b.group(bossGroup, workerGroup)
					.channel(NioServerSocketChannel.class)
					.option(ChannelOption.SO_BACKLOG, 100)
					.handler(new LoggingHandler(LogLevel.INFO))
					.childHandler(new ChannelInitializer<SocketChannel>() {
						@Override
						public void initChannel(SocketChannel ch) {
							ChannelPipeline pipeline = ch.pipeline();
							/*
							 * ProtobufVarint32FrameDecoder处理半包消息
							 * 此外还可使用LengthFieldBasedFrameDecoder通用半包解码器
							 * 或者继承ByteToMessageDecoder 自己处理半包消息
							 */
							pipeline.addLast(new ProtobufVarint32FrameDecoder());
							pipeline.addLast(new ProtobufVarint32LengthFieldPrepender());

							addProtobuf(pipeline);

							pipeline.addLast(new NettyServerHandler());
						}
					});

			// 绑定端口，同步等待成功
			ChannelFuture f = null;
			try {
				f = b.bind(8080).sync();
			} catch (InterruptedException e) {
				e.printStackTrace();
			}

			// 等待服务端监听端口关闭
			try {
				f.channel().closeFuture().sync();
			} catch (InterruptedException e) {
				e.printStackTrace();
			}

		} finally {
			// 优雅退出，释放线程池资源
			bossGroup.shutdownGracefully();
			workerGroup.shutdownGracefully();
		}
	}

	private void addProtobuf(ChannelPipeline pipeline) {
		SubscribeReq req = SubscribeReqProto.SubscribeReq
				.getDefaultInstance();
		pipeline.addLast(new ProtobufDecoder(req)); // ProtobufDecoder解码器
		pipeline.addLast(new ProtobufEncoder()); // ProtobufDecoder编码器

	}
}
