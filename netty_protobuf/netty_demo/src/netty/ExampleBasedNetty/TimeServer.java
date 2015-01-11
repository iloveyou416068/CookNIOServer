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
package netty.ExampleBasedNetty;

import io.netty.bootstrap.ServerBootstrap;
import io.netty.channel.ChannelFuture;
import io.netty.channel.ChannelInitializer;
import io.netty.channel.ChannelOption;
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
		/*
		 * 配置服务端的NIO线程组(NioEventLoopGroup是一个NIO线程组,专门用于网络事件处理.实际上就是个Reactor线程组)
		 * 
		 */
		// 用于服务端接受客户端连接(处理accept事件)
		EventLoopGroup parentGroup = new NioEventLoopGroup();
		// 用于进行SocketChannel的网络读写(用于处理accept之后Channel的IO事件)
		EventLoopGroup childGroup = new NioEventLoopGroup();
		try {
			// ServerBootstrap用于启动NIO服务端的辅助启动类
			ServerBootstrap b = new ServerBootstrap();
			b.group(parentGroup, childGroup)
				 .channel(NioServerSocketChannel.class) // NioServerSocketChannel 对应NIO的ServerSocketChannel
				 .option(ChannelOption.SO_BACKLOG, 1024)
				 .childHandler(new ChildChannelHandler()); // 处理IO事件(记录日记,对消息编解码等)
			
			// 绑定端口，同步等待成功
			ChannelFuture f = b.bind(8080).sync();
			System.out.println("绑定端口，同步成功");
			
			// 等待服务端监听端口关闭
			f.channel().closeFuture().sync();
			System.out.println("服务端监听端口关闭");
			
		} finally {
			// 优雅退出，释放线程池资源
			parentGroup.shutdownGracefully();
			childGroup.shutdownGracefully();
		}
	}

	private static class ChildChannelHandler extends ChannelInitializer<SocketChannel> {
		@Override
		protected void initChannel(SocketChannel socketChannel) throws Exception {
			socketChannel.pipeline().addLast(new TimeServerHandler());
		}

	}
}
