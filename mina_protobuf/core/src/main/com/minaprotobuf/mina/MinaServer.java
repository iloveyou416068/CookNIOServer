package com.minaprotobuf.mina;

import java.io.IOException;
import java.net.InetSocketAddress;

import org.apache.mina.core.filterchain.DefaultIoFilterChainBuilder;
import org.apache.mina.core.session.IdleStatus;
import org.apache.mina.filter.codec.ProtocolCodecFilter;
import org.apache.mina.filter.executor.ExecutorFilter;
import org.apache.mina.filter.executor.OrderedThreadPoolExecutor;
import org.apache.mina.filter.logging.LoggingFilter;
import org.apache.mina.filter.logging.MdcInjectionFilter;
import org.apache.mina.transport.socket.nio.NioSocketAcceptor;

import com.minaprotobuf.codec.ProtobufCodecFactory;

/**
 *
 * TODO 异常处理
 *
 */
public enum MinaServer {

	INSTANCE;

	private final int PORT = 1234;

	public void start() {

		NioSocketAcceptor acceptor = new NioSocketAcceptor();

		// 处理NioSocketAcceptor 里的Filter
		filter(acceptor);

		// 设置Handler
		acceptor.setHandler(new ProtocolHandler());

		acceptor.getSessionConfig().setIdleTime(IdleStatus.BOTH_IDLE, 30);
        acceptor.getSessionConfig().setReadBufferSize(1024);
        acceptor.getSessionConfig().setReceiveBufferSize(1024);
        acceptor.setReuseAddress(true);
        acceptor.getSessionConfig().setTcpNoDelay(true); // 设置为非延迟发送

		try { // 绑定IP地址
			acceptor.bind(new InetSocketAddress(PORT));
		} catch (IOException e) {
			e.printStackTrace();
		}

		System.out.println("Listening on port " + PORT);
	}

	private static void filter(NioSocketAcceptor acceptor) {

		// 获取NioSocketAcceptor里的DefaultIoFilterChainBuilder
		DefaultIoFilterChainBuilder chain = acceptor.getFilterChain();

		chain.addLast("mdc", new MdcInjectionFilter());

		chain.addLast("codec", new ProtocolCodecFilter(new ProtobufCodecFactory()));

		chain.addLast("logger", new LoggingFilter());

		acceptor.getFilterChain().addLast("threadPool", new ExecutorFilter(new OrderedThreadPoolExecutor(10, 80)));
	}

}
