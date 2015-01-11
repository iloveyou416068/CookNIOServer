package examples.udt.echo;

import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.udt.nio.NioUdtProvider;

public class EchoUtil {

	public static String socketUDT(ChannelHandlerContext ctx) {
//		return NioUdtProvider.socketUDT(ctx.channel()).toStringOptions();
		return "";
	}
}
