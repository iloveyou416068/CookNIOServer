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
package netty.ExampleBasedIO.bio;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.Socket;
import java.util.Date;
import java.util.concurrent.TimeUnit;

/**
 * 同步IO的问题
 * InputStram在read时调用线程会堵塞直到发生下列三个事件
 * 1.有数据可读. 2.可用数据读完. 3.发生空指针或者IO异常
 * 
 * 同样OutputStream在write时同样会堵塞调用线程
 * 如果消息接收方处理缓慢,将不能及时从TCP缓冲区中读取数据,这将导致放松方的TCP window size不断减少,直到为0.
 * 但是此时双方处于keep-alive状态,发送方却不能向TCP缓冲区中写入数据,发送方将处于堵塞状态
 * 
 * 
 * @author Administrator
 * @date 2014年2月14日
 * @version 1.0
 */
public class TimeServerHandler implements Runnable {

	private Socket socket;

	public TimeServerHandler(Socket socket) {
		this.socket = socket;
	}

	@Override
	public void run() {
		BufferedReader in = null;
		PrintWriter out = null;
		try {
			TimeUnit.SECONDS.sleep(10); // 打开VisualVM查看所耗内存

			in = new BufferedReader(new InputStreamReader(this.socket.getInputStream()));
			out = new PrintWriter(this.socket.getOutputStream(), true);
			String currentTime = null;
			String body = null;
			while (true) {
				body = in.readLine();
				if (body == null)
					break;
				String tn = Thread.currentThread().getName();
				System.out.println("Server -- " + tn + " receive order : " + body);
				currentTime = "QUERY TIME ORDER".equalsIgnoreCase(body) ? new Date(System.currentTimeMillis()).toString() : "BAD ORDER";
				out.println(currentTime);
			}

		} catch (Exception e) {
			if (in != null) {
				try {
					in.close();
				} catch (IOException e1) {
					e1.printStackTrace();
				}
			}
			if (out != null) {
				out.close();
				out = null;
			}
			if (this.socket != null) {
				try {
					this.socket.close();
				} catch (IOException e1) {
					e1.printStackTrace();
				}
				this.socket = null;
			}
		}
	}
}
