/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
package mina.haiku;

import java.net.InetSocketAddress;
import java.nio.charset.Charset;
import java.util.concurrent.Executors;

import org.apache.mina.core.filterchain.DefaultIoFilterChainBuilder;
import org.apache.mina.filter.codec.ProtocolCodecFilter;
import org.apache.mina.filter.codec.textline.TextLineCodecFactory;
import org.apache.mina.filter.executor.ExecutorFilter;
import org.apache.mina.transport.socket.SocketAcceptor;
import org.apache.mina.transport.socket.nio.NioSocketAcceptor;

/**
 * @author <a href="http://mina.apache.org">Apache MINA Project</a>
 */

public class HaikuValidationServer {
	
    public static void main(String... args) throws Exception {
        
    	// 根据系统允许的最大线程数,来初始化服务器线程池
    	int ap = Runtime.getRuntime().availableProcessors();
        SocketAcceptor acceptor = new NioSocketAcceptor(ap);

        // 设置服务器的过滤链
        DefaultIoFilterChainBuilder fc = acceptor.getFilterChain();
        fc.addLast("executor", new ExecutorFilter(Executors.newCachedThreadPool()));
        fc.addLast("to-string", new ProtocolCodecFilter(new TextLineCodecFactory(Charset.forName("US-ASCII"))));
        fc.addLast("to-haiki", new ToHaikuIoFilter());

        // 设置Handler
        acceptor.setHandler(new HaikuValidatorIoHandler());
        acceptor.bind(new InetSocketAddress(42458));
        
    }
    
}
