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
package netty.ExampleBasedIO.pio;

import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.concurrent.ArrayBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

import netty.ExampleBasedIO.bio.TimeServerHandler;

/**
 * 用线程池方式实现伪异步并发(重用已有线程)
 * 但是这种方式从底层来讲仍然是采用同步IO
 * 
 * @author lilinfeng
 * @date 2014年2月14日
 * @version 1.0
 */
public class TimeServer {

	/**
	 * @param args
	 * @throws IOException
	 */
	public static void main(String[] args) throws IOException {
		
		ServerSocket server = null;
		try {
			server = new ServerSocket(8080);
			System.out.println("The time server is start in port : 8080");
			Socket socket = null;
			ThreadPoolExecutor singleExecutor = initExecutePool(50, 10000);// 创建IO任务线程池
			
			while (true) {
				socket = server.accept();
				singleExecutor.execute(new TimeServerHandler(socket));
			}
		} finally {
			if (server != null) {
				System.out.println("The time server close");
				server.close();
				server = null;
			}
		}
	}
	
	private static ThreadPoolExecutor initExecutePool(int maxPoolSize, int queueSize) {
		int ap = Runtime.getRuntime().availableProcessors(); // 线程池中最小的线程数
		ArrayBlockingQueue<Runnable> queue = new ArrayBlockingQueue<>(queueSize); // 事件存储
		return new ThreadPoolExecutor(ap, maxPoolSize, 120L, TimeUnit.SECONDS, queue);
		
	}
}
