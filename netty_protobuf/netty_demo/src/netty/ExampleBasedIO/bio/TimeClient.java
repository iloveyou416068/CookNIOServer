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

/**
 * @author lilinfeng
 * @date 2014年2月14日
 * @version 1.0
 */
public class TimeClient {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// 一个线程大概占用1M内存,查看1000个请求所建立的请求是否需要1G左右内存
		for(int i = 0; i < 500; i++) { 
			
			Thread t = new Thread(new Runnable() {
				
				@Override
				public void run() {
					query();
					
				}
			});
			
			t.start();
		}
	}
	
	private static void query() {
		Socket socket = null;
		BufferedReader in = null;
		PrintWriter out = null;
		try {
			String tn = Thread.currentThread().getName();
			System.out.println("Clinet Request -- " + tn);
			socket = new Socket("127.0.0.1", 8080);
			in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
			out = new PrintWriter(socket.getOutputStream(), true);
			out.println("QUERY TIME ORDER");
			System.out.println("Clinet Response -- " + tn + ".  Now is : " + in.readLine());
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			if (out != null) {
				out.close();
				out = null;
			}

			if (in != null) {
				try {
					in.close();
				} catch (IOException e) {
					e.printStackTrace();
				}
				in = null;
			}

			if (socket != null) {
				try {
					socket.close();
				} catch (IOException e) {
					e.printStackTrace();
				}
				socket = null;
			}
		}
	}
}
