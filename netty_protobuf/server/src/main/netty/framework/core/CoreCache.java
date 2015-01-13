package netty.framework.core;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

import netty.framework.action.AbstractAtction;
import netty.framework.messages.MsgId.MsgID;
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
	private final Map<String, Object> parser = new HashMap<>();
	// actions
	private final Map<String, AbstractAtction> actions = new HashMap<>();
	
	// 服务器启动时,初始化parser 和actions
	public void init() {

		try {
			List<Class> actionclass = ClassFinder.findClasses(
					"netty.framework.action", "Action");
			for (Class action : actionclass) {
				String[] splits = action.getName().split(".");
				String actionName = splits[splits.length - 1];
				String name = actionName.split("Action")[0];

				actions.put(name, (AbstractAtction) action.newInstance());
			}

			List<Class> messages = ClassFinder.findClasses(
					"netty.framework.messages", "Message");
			for (Class message : messages) {
				String[] splits = message.getName().split(".");
				String messageName = splits[splits.length - 1];
				if (!messageName.endsWith("Message"))
					parser.put(messageName, message.newInstance());
			}

		} catch (InstantiationException e) {
			e.printStackTrace();
		} catch (IllegalAccessException e) {
			e.printStackTrace();
		}
	}
	
	public MessageLite getParser(int id) {
		MsgID.valueOf(id).name();
		return (MessageLite)parser.get(id);
	}
	
	public AbstractAtction getExecutor(String key) {
		return actions.get(key);
	}
}
