/*
 *   Licensed to the Apache Software Foundation (ASF) under one
 *   or more contributor license agreements.  See the NOTICE file
 *   distributed with this work for additional information
 *   regarding copyright ownership.  The ASF licenses this file
 *   to you under the Apache License, Version 2.0 (the
 *   "License"); you may not use this file except in compliance
 *   with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing,
 *   software distributed under the License is distributed on an
 *   "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 *   KIND, either express or implied.  See the License for the
 *   specific language governing permissions and limitations
 *   under the License.
 *
 */
package mina.gettingstarted.timeserver;

import java.io.IOException;
import java.net.InetSocketAddress;
import java.nio.charset.Charset;

import org.apache.mina.core.service.IoAcceptor;
import org.apache.mina.core.session.IdleStatus;
import org.apache.mina.filter.codec.ProtocolCodecFilter;
import org.apache.mina.filter.codec.textline.TextLineCodecFactory;
import org.apache.mina.filter.logging.LoggingFilter;
import org.apache.mina.transport.socket.nio.NioSocketAcceptor;

/**
 */
public class MinaTimeServer {
	
    private static final int PORT = 9123;

    public static void main(String[] args) throws IOException {
        
    	// Create the acceptor
        IoAcceptor acceptor = new NioSocketAcceptor();
        
        // 启动mina服务器的log日志
        acceptor.getFilterChain().addLast( "logger", new LoggingFilter() );
        // 流的解析,以便在messageRecived 可以获得解析出来的相关数据
        acceptor.getFilterChain().addLast( "codec", new ProtocolCodecFilter(  
        					new TextLineCodecFactory( Charset.forName( "UTF-8" ))));
   
        // Attach the business logic to the server
        acceptor.setHandler( new TimeServerHandler() );

        // Configurate the buffer size and the iddle time
        acceptor.getSessionConfig().setReadBufferSize( 2048 );
        acceptor.getSessionConfig().setIdleTime( IdleStatus.BOTH_IDLE, 10 );
        
        // And bind !
        acceptor.bind( new InetSocketAddress(PORT) );
    }
}