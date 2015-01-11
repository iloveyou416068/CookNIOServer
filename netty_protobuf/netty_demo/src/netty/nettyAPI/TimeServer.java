/*
 * Copyright 2013-2018 Lilinfeng.
 *  
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *  
 *      http://www.apache.org/licenses/LICENSE-2.0
 *  
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package netty.nettyAPI;

import io.netty.bootstrap.ServerBootstrap;
import io.netty.channel.ChannelFuture;
import io.netty.channel.ChannelInitializer;
import io.netty.channel.ChannelOption;
import io.netty.channel.ChannelPipeline;
import io.netty.channel.EventLoopGroup;
import io.netty.channel.nio.NioEventLoopGroup;
import io.netty.channel.socket.SocketChannel;
import io.netty.channel.socket.nio.NioServerSocketChannel;

/**
 * 
 * @author lilinfeng
 * @date 2014年2月14日
 * @version 1.0
 */
public class TimeServer {

	public static void main(String[] args) throws Exception {
		EventLoopGroup parentGroup = new NioEventLoopGroup();
		EventLoopGroup childGroup = new NioEventLoopGroup();
		try {
			ServerBootstrap b = new ServerBootstrap();
			
			b.group(parentGroup, childGroup);
			b.option(ChannelOption.SO_BACKLOG, 1024);
			b.childHandler(new ChannelInitializer<SocketChannel>() {
				@Override
				protected void initChannel(SocketChannel socketChannel)
						throws Exception {
					ChannelPipeline pipe = socketChannel.pipeline();
					inbound(pipe);
				}
			});

			ChannelFuture f = b.bind(8080).sync();
			f.channel().closeFuture().sync();

		} finally {
			// 优雅退出，释放线程池资源
			parentGroup.shutdownGracefully();
			childGroup.shutdownGracefully();
		}
	}
	
	// inbound事件通常由IO线程触发.
	private static void inbound(ChannelPipeline pipe) {
		// channel注册事件
		pipe.fireChannelRegistered();
		// TCP链路建立成功,Channel事件激活
		pipe.fireChannelActive();
		// 读事件
		pipe.fireChannelRead(pipe);
		// 读操作完成通知事件
		pipe.fireChannelReadComplete();
	}

}
