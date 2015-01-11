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
package netty.ExampleBasedIO.aio.server;

import java.nio.ByteBuffer;
import java.nio.channels.AsynchronousSocketChannel;
import java.nio.channels.CompletionHandler;

/**
 * @author lilinfeng
 * @date 2014年2月16日
 * @version 1.0
 */
public class AcceptCompletionHandler implements CompletionHandler<AsynchronousSocketChannel, AsyncTimeServerHandler> {

	@Override
	public void completed(AsynchronousSocketChannel result, AsyncTimeServerHandler attachment) {
		
		/**
		 * 再次调用asynchronousServerSocketChannel#accept,如果有新的客户端连接进来,
		 * 系统会回调传入的Completionhandler#completed方法,表示有新的客户端连接成功.
		 * 因为一个AsynchronousServerSocketChannel可以接受很多客户端,所以需要
		 * 继续调用accept,接受其他客户端连接,最后形成一个循环
		 * 
		 */
		attachment.asynchronousServerSocketChannel.accept(attachment, this);
		/**
		 * 链路建立成功之后,服务器需要接受客户端的请求,调用AsynchronousSocketChannel#read进行异步读
		 * result传入ReadCompletionHandler 作为回调时候的入参
		 * ReadCompletionHandler 作为回调业务的Handler
		 */
		ByteBuffer buffer = ByteBuffer.allocate(1024);
		result.read(buffer, buffer, new ReadCompletionHandler(result));
		
	}

	/**
	 * 
	 */
	@Override
	public void failed(Throwable exc, AsyncTimeServerHandler attachment) {
		exc.printStackTrace();
		attachment.latch.countDown();
	}

}
