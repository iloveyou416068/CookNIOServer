package netty.framework.util;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;

public class JsonTool {

	private static final Gson gson = new GsonBuilder().create();
	
	public static String toJson(Object obj) {
		return gson.toJson(obj);
	}
}
