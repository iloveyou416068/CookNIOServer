package netty.framework.command.download;

import io.netty.channel.ChannelHandlerContext;
import netty.framework.command.AbstractCommand;
import netty.framework.core.parser.HttpParamaters;

public class DownloadFileCommand extends AbstractCommand {

	@Override
	public String execute(HttpParamaters param) {
		final ChannelHandlerContext out = param.ctx;
		
		return "";
	}

}
