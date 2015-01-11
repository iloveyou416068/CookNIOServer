/*
 *  Licensed to the Apache Software Foundation (ASF) under one
 *  or more contributor license agreements.  See the NOTICE file
 *  distributed with this work for additional information
 *  regarding copyright ownership.  The ASF licenses this file
 *  to you under the Apache License, Version 2.0 (the
 *  "License"); you may not use this file except in compliance
 *  with the License.  You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing,
 *  software distributed under the License is distributed on an
 *  "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 *  KIND, either express or implied.  See the License for the
 *  specific language governing permissions and limitations
 *  under the License.
 *
 */
package mina.chat;

import java.net.InetSocketAddress;

import mina.echoserver.ssl.BogusSslContextFactory;

import org.apache.mina.core.filterchain.DefaultIoFilterChainBuilder;
import org.apache.mina.filter.codec.ProtocolCodecFilter;
import org.apache.mina.filter.codec.textline.TextLineCodecFactory;
import org.apache.mina.filter.logging.LoggingFilter;
import org.apache.mina.filter.logging.MdcInjectionFilter;
import org.apache.mina.filter.ssl.SslFilter;
import org.apache.mina.transport.socket.nio.NioSocketAcceptor;

/**
 * 
 * TODO 异常处理
 * 
 */
public class Main {
	
	private static final int PORT = 1234;

	private static final boolean USE_SSL = false;

	public static void main(String[] args) throws Exception {
		
		NioSocketAcceptor acceptor = new NioSocketAcceptor();
		
		// 处理NioSocketAcceptor 里的Filter
		filter(acceptor);

		// 设置Handler
		acceptor.setHandler(new ChatProtocolHandler());
		
		// 绑定IP地址
		acceptor.bind(new InetSocketAddress(PORT));

		System.out.println("Listening on port " + PORT);
	}

	private static void addSSLSupport(DefaultIoFilterChainBuilder chain)
			throws Exception {

		SslFilter sslFilter = new SslFilter(BogusSslContextFactory.getInstance(true));
		chain.addLast("sslFilter", sslFilter);
		
		System.out.println("SSL ON");
	}
	
	private static void filter(NioSocketAcceptor acceptor) throws Exception {
		
		// 获取NioSocketAcceptor里的DefaultIoFilterChainBuilder
		DefaultIoFilterChainBuilder chain = acceptor.getFilterChain();
		
		// MdcInjectionFilter:
		chain.addLast("mdc", new MdcInjectionFilter());

		if (USE_SSL) {
			// 添加SSL支持
			addSSLSupport(chain);
		}

		// ProtocolCodecFilte: 
		// TextLineCodecFactory:
		chain.addLast("codec", new ProtocolCodecFilter(new TextLineCodecFactory()));

		// LoggingFilter:
		chain.addLast("logger", new LoggingFilter());
	}

}
