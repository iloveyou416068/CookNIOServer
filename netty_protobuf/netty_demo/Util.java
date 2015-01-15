package netty;

import io.netty.buffer.ByteBuf;
import io.netty.buffer.Unpooled;
import io.netty.channel.ChannelPipeline;
import io.netty.channel.socket.SocketChannel;
import io.netty.handler.codec.DelimiterBasedFrameDecoder;
import io.netty.handler.codec.FixedLengthFrameDecoder;
import io.netty.handler.codec.LineBasedFrameDecoder;
import io.netty.handler.codec.http.HttpObjectAggregator;
import io.netty.handler.codec.http.HttpRequestDecoder;
import io.netty.handler.codec.http.HttpResponseEncoder;
import io.netty.handler.codec.http.HttpServerCodec;
import io.netty.handler.codec.protobuf.ProtobufDecoder;
import io.netty.handler.codec.protobuf.ProtobufEncoder;
import io.netty.handler.codec.protobuf.ProtobufVarint32FrameDecoder;
import io.netty.handler.codec.protobuf.ProtobufVarint32LengthFieldPrepender;
import io.netty.handler.codec.serialization.ClassResolver;
import io.netty.handler.codec.serialization.ClassResolvers;
import io.netty.handler.codec.serialization.ObjectDecoder;
import io.netty.handler.codec.serialization.ObjectEncoder;
import io.netty.handler.codec.string.StringDecoder;
import io.netty.util.CharsetUtil;

import java.util.Date;

import io.netty.handler.stream.ChunkedWriteHandler;
import netty.nettyCodec.marshalling.MarshallingCodeCFactory;
import netty.nettyCodec.protobuf.protos.SubscribeRespProto;
import netty.nettyCodec.protobuf.protos.SubscribeRespProto.SubscribeResp;

public class Util {

	public static String currentTime(String body) {
		return "QUERY TIME ORDER".equalsIgnoreCase(body) ? new Date()
				.toString() : "BAD ORDER";
	}

	public static void marshallingCodec(SocketChannel ch) {
		ChannelPipeline pipeline = ch.pipeline();
		pipeline.addLast(MarshallingCodeCFactory.buildMarshallingDecoder());
		pipeline.addLast(MarshallingCodeCFactory.buildMarshallingEncoder());
		
	}

	public static void protobufCodec(SocketChannel ch) {
		ChannelPipeline pipeline = ch.pipeline();
		pipeline.addLast(new ProtobufVarint32FrameDecoder());
		pipeline.addLast(new ProtobufVarint32LengthFieldPrepender());
		SubscribeResp resp = SubscribeRespProto.SubscribeResp.getDefaultInstance();
		pipeline.addLast(new ProtobufDecoder(resp));
		pipeline.addLast(new ProtobufEncoder());
		
	}

	public static void serializabileCodec(SocketChannel ch, Class<?> clazz) {
		ChannelPipeline pipeline = ch.pipeline();
		// 使用weakCachingConcurrentResolver创建线程安全的WeakReferenceMap对类加载器进行缓存
		// 它支持并发访问,当虚拟机内存不足时,会释放缓存中的内存,防止内存泄漏
		ClassResolver cr = ClassResolvers.weakCachingConcurrentResolver(clazz
				.getClassLoader());
		// ObjectDecoder对序列化的POJO进行解码.为了防止异常码流和解码错位导致的内存溢出,这里将耽搁对象最大序列化后的字节数组长度设置为1M
		pipeline.addLast(new ObjectDecoder(1024 * 1024, cr));
		// ObjectEncoder会自动对实现了序列化的POJO进行编码
		pipeline.addLast(new ObjectEncoder());
		
	}

	public static void lineDecoder(SocketChannel ch) {
		ChannelPipeline pipeline = ch.pipeline();
		pipeline.addLast(new LineBasedFrameDecoder(1024));
		pipeline.addLast(new StringDecoder());
		
	}

	public static void delimiterDecoder(SocketChannel ch) {
		ChannelPipeline pipeline = ch.pipeline();
		ByteBuf delimiter = Unpooled.copiedBuffer("$_".getBytes()); // 创建分隔符
		pipeline.addLast(new DelimiterBasedFrameDecoder(1024, delimiter));
		pipeline.addLast(new StringDecoder());
		
	}

	public static void fixedLengthDecoder(SocketChannel ch) {
		ChannelPipeline pipeline = ch.pipeline();
		pipeline.addLast(new FixedLengthFrameDecoder(20));
		pipeline.addLast(new StringDecoder());
		
	}

	public static void LineProtocol(SocketChannel ch) {
		ChannelPipeline pipeline = ch.pipeline();
		pipeline.addLast(new LineBasedFrameDecoder(1024));
		pipeline.addLast(new StringDecoder(CharsetUtil.UTF_8));
	}

	public static void httpProtocol(SocketChannel ch) {
		ch.pipeline().addLast("http-decoder", new HttpRequestDecoder()); // 添加Http消息解码器
		// 添加HttpObjectAggregator解码器,它将多个消息转换成单一的FullHttpRequest或者FullHttpResponse
		// 因为Http解码器会在每个Http消息中生成多个消息对象(HttpRequest/HttpResponse, HttpContent,
		// LastHttpContent)
		ch.pipeline().addLast("http-aggregator", new HttpObjectAggregator(65536));
		ch.pipeline().addLast("http-encoder", new HttpResponseEncoder()); // 对Http响应消息进行编码
		ch.pipeline().addLast("http-chunked", new ChunkedWriteHandler()); // 支持异步发送大的码流(如文件),但不占用过多的内存,防止发生java内存溢出
	}

	public static void websocket(SocketChannel ch) {
		ChannelPipeline pipeline = ch.pipeline();
		pipeline.addLast("http-codec", new HttpServerCodec());
		pipeline.addLast("aggregator", new HttpObjectAggregator(65536));
		// ChunkedWriteHandler
		pipeline.addLast("http-chunked", new ChunkedWriteHandler());
	}
}
