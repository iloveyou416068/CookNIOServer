package netty.framework.core;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

import netty.framework.action.AbstractAtction;
import netty.framework.util.ClassFinder;

import com.google.protobuf.MessageLite;

/**
 * 保存action类和解析protobuf的parser类
 * @author wangming
 *
 */
public enum CoreCache {

	INSTANCE;
	
	// parser解析器
	private final Map<Integer, MessageLite> parser = new HashMap<>();
	// actions
	private final Map<String, AbstractAtction> actions = new HashMap<>();
	
	// 服务器启动时,初始化parser 和actions
	public void init() {
		
		List<Class> actionclass = ClassFinder.findClass("netty.framework.action");
		for (Class action : actionclass) {
			String[] splits = action.getName().split(".");
			String actionName = splits[splits.length - 1];
			String name = actionName.split("Action")[0];
			try {
				actions.put(name, (AbstractAtction)action.newInstance());
			} catch (InstantiationException e) {
				e.printStackTrace();
			} catch (IllegalAccessException e) {
				e.printStackTrace();
			}
		}
		
		List<Class> messages = ClassFinder.findClass("netty.framework.messages");
		for (Class message : messages) {
			String[] splits = message.getName().split(".");
			String messageName = splits[splits.length - 1];
			if(!messageName.endsWith("Message"))
				if(messageName.equals("MsgID"))
					parseMsgId(messageName);
				else
					continue;
			// TODO
		}
	}
	
	private void parseMsgId(String messageName) {
		
	}
	
	public MessageLite getParser(int id) {
		return parser.get(id);
	}
	
	public AbstractAtction getExecutor(String key) {
		return actions.get(key);
	}
}
