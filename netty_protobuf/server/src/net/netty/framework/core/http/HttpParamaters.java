package netty.framework.core.http;

import io.netty.channel.ChannelHandlerContext;

import java.util.HashMap;
import java.util.Map;

public class HttpParamaters {

	public String scheme;
	public Map<String, String> parameters = new HashMap<>();
	public ChannelHandlerContext ctx;
}
