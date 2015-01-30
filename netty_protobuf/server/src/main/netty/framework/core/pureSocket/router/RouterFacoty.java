package netty.framework.core.pureSocket.router;

public class RouterFacoty {

	private static final SinglethreadRouter singleRouter = new SinglethreadRouter();
	private static final MultithreadRouter multithreadRouter = new MultithreadRouter();
	
	public static SinglethreadRouter getSinglethreadRouter() {
		return singleRouter;
	}
	
	public static MultithreadRouter getMultithreadRouter() {
		return multithreadRouter;
	}
	
	
}
