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
package netty.nettyProtocol.http.fileServer;

import io.netty.handler.stream.ChunkedWriteHandler;
import io.netty.bootstrap.ServerBootstrap;
import io.netty.channel.ChannelFuture;
import io.netty.channel.ChannelInitializer;
import io.netty.channel.EventLoopGroup;
import io.netty.channel.nio.NioEventLoopGroup;
import io.netty.channel.socket.SocketChannel;
import io.netty.channel.socket.nio.NioServerSocketChannel;
import io.netty.handler.codec.http.HttpObjectAggregator;
import io.netty.handler.codec.http.HttpRequestDecoder;
import io.netty.handler.codec.http.HttpResponseEncoder;

/**
 * @author lilinfeng
 * @date 2014年2月14日
 * @version 1.0
 */
public class HttpFileServer {

	private static final String DEFAULT_URL = "/";

	public void run(final int port, final String url) throws Exception {
		EventLoopGroup bossGroup = new NioEventLoopGroup();
		EventLoopGroup workerGroup = new NioEventLoopGroup();
		try {
			ServerBootstrap b = new ServerBootstrap();
			b.group(bossGroup, workerGroup)
					.channel(NioServerSocketChannel.class)
					.childHandler(new ChannelInitializer<SocketChannel>() {
						@Override
						protected void initChannel(SocketChannel ch)
								throws Exception {
							ch.pipeline().addLast("http-decoder", new HttpRequestDecoder()); // 添加Http消息解码器
							// 添加HttpObjectAggregator解码器,它将多个消息转换成单一的FullHttpRequest或者FullHttpResponse
							// 因为Http解码器会在每个Http消息中生成多个消息对象(HttpRequest/HttpResponse, HttpContent, LastHttpContent)
							ch.pipeline().addLast("http-aggregator", new HttpObjectAggregator(65536)); 
							ch.pipeline().addLast("http-encoder", new HttpResponseEncoder()); // 对Http响应消息进行编码
							ch.pipeline().addLast("http-chunked", new ChunkedWriteHandler()); // 支持异步发送大的码流(如文件),但不占用过多的内存,防止发生java内存溢出
							ch.pipeline().addLast("fileServerHandler", new HttpFileServerHandler(url)); // 
						}
					});
			
			ChannelFuture future = b.bind("192.168.1.102", port).sync();
			System.out.println("HTTP文件目录服务器启动，网址是 : " + "http://192.168.1.102:" + port + url);
			future.channel().closeFuture().sync();
		} finally {
			bossGroup.shutdownGracefully();
			workerGroup.shutdownGracefully();
		}
	}

	public static void main(String[] args) throws Exception {
		new HttpFileServer().run(8080, DEFAULT_URL);
	}
}
