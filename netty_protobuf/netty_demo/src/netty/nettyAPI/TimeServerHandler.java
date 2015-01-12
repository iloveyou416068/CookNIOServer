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
package netty.nettyAPI;

import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.ChannelInboundHandlerAdapter;

/**
 * 对网络操作进行读写操作
 * 
 * @author lilinfeng
 * @date 2014年2月14日
 * @version 1.0
 */
public class TimeServerHandler extends ChannelInboundHandlerAdapter {

	/**
	 * 将msg转换成netty的ByteBuf(类似于NIO的ByteBuffer,但是它有更强大的功能)
	 */
	@Override
	public void channelRead(ChannelHandlerContext ctx, Object msg)
			throws Exception {
		System.out.println("channelRead");
	}

	@Override
	public void channelReadComplete(ChannelHandlerContext ctx) throws Exception {
		System.out.println("channelReadComplete");
	}

	@Override
	public void exceptionCaught(ChannelHandlerContext ctx, Throwable cause) {
		System.out.println("exceptionCaught");
		ctx.close();
	}

//	@Override
//	public void bind(ChannelHandlerContext ctx, SocketAddress localAddress,
//			ChannelPromise promise) throws Exception {
//		System.out.println("bind");
//	}

	@Override
	public void channelActive(ChannelHandlerContext ctx) throws Exception {
		System.out.println("channelActive");
	}

	@Override
	public void channelInactive(ChannelHandlerContext ctx) throws Exception {
		System.out.println("channelInactive");
	}

	@Override
	public void channelRegistered(ChannelHandlerContext ctx) throws Exception {
		System.out.println("channelRegistered");
	}

	@Override
	public void channelWritabilityChanged(ChannelHandlerContext ctx)
			throws Exception {
		System.out.println("channelWritabilityChanged");
	}

//	@Override
//	public void close(ChannelHandlerContext ctx, ChannelPromise promise)
//			throws Exception {
//		System.out.println("close");
//	}
//
//	@Override
//	public void connect(ChannelHandlerContext ctx, SocketAddress remoteAddress,
//			SocketAddress localAddress, ChannelPromise promise)
//			throws Exception {
//		System.out.println("connect");
//	}
//
//	@Override
//	public void disconnect(ChannelHandlerContext ctx, ChannelPromise promise)
//			throws Exception {
//		System.out.println("disconnect");
//	}

//	@Override
//	public void flush(ChannelHandlerContext ctx) throws Exception {
//		System.out.println("flush");
//	}

	@Override
	public void handlerAdded(ChannelHandlerContext ctx) throws Exception {
		System.out.println("handlerAdded");
	}

	@Override
	public void handlerRemoved(ChannelHandlerContext ctx) throws Exception {
		System.out.println("handlerRemoved");
	}

	@Override
	public boolean isSharable() {
		// TODO Auto-generated method stub
		return super.isSharable();
	}

//	@Override
//	public void read(ChannelHandlerContext ctx) throws Exception {
//		System.out.println("read");
//	}

	@Override
	public void userEventTriggered(ChannelHandlerContext ctx, Object evt)
			throws Exception {
		System.out.println("userEventTriggered");
	}

//	@Override
//	public void write(ChannelHandlerContext ctx, Object msg,
//			ChannelPromise promise) throws Exception {
//		System.out.println("write");
//	}
	
	
}
