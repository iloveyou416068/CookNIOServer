/*
 * Copyright 2012 The Netty Project
 *
 * The Netty Project licenses this file to you under the Apache License,
 * version 2.0 (the "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at:
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */
package io.netty.channel;

import io.netty.bootstrap.Bootstrap;
import io.netty.util.concurrent.BlockingOperationException;
import io.netty.util.concurrent.Future;
import io.netty.util.concurrent.GenericFutureListener;

import java.util.concurrent.TimeUnit;


/**
 * The result of an asynchronous {@link Channel} I/O operation.
 * <p>
 * All I/O operations in Netty are asynchronous.  It means any I/O calls will
 * return immediately with no guarantee that the requested I/O operation has
 * been completed at the end of the call.  Instead, you will be returned with
 * a {@link ChannelFuture} instance which gives you the information about the
 * result or status of the I/O operation.
 * 
 * 在Netty里所有的I/O操作都是异步的. 这意味着, 任何I/O调用都会立即返回一个结果, 但是不确保该I/O操作已经完成.
 * 所以Netty返回了一个 {@link ChannelFuture} 实例, 该实例内含了I/O操作的结果或者状态信息
 * 
 * <p>
 * A {@link ChannelFuture} is either <em>uncompleted</em> or <em>completed</em>.
 * When an I/O operation begins, a new future object is created.  The new future
 * is uncompleted initially - it is neither succeeded, failed, nor cancelled
 * because the I/O operation is not finished yet.  If the I/O operation is
 * finished either successfully, with failure, or by cancellation, the future is
 * marked as completed with more specific information, such as the cause of the
 * failure.  Please note that even failure and cancellation belong to the
 * completed state.
 * 
 * {@link ChannelFuture} 只有俩种状态 uncompleted 或者 completed. 只要一个I/O操作开始, 就会实例化
 * 出一个future对象. future的初始状态是 uncompleted, 只要I/O操作还没有完成, 它就不可能是succeeded, 
 * failed, 或者 cancelled. 如果I/O操作完成了(不管是因为successfully, failure, cancellation)
 * 会附带着一下特殊的完成信息, 例如失败的原因(the cause of the failure) 
 * 
 * <pre>
 *                                      +------------------------------+
 *                                      | Completed successfully       |
 *                                      +------------------------------+
 *                                 +----> isDone() = <b>true</b>       |
 * +--------------------------+    |    | isSuccess() = <b>true</b>    |
 * |        Uncompleted       |    |    +==============================+
 * +--------------------------+    |    | Completed with failure       |
 * | isDone() = <b>false</b>  |    |    +------------------------------+
 * | sSuccess() = false    	  |----+----> isDone() = <b>true</b>       |
 * | isCancelled() = false    |    |    | cause() = <b>non-null</b>    |
 * | cause() = null           |    |    +==============================+
 * +--------------------------+    |    | Completed by cancellation    |
 *                                 |    +------------------------------+
 *                                 +----> isDone() = <b>true</b>       |
 *                                      | isCancelled() = <b>true</b>  |
 *                                      +------------------------------+
 * </pre>
 *
 * Various methods are provided to let you check if the I/O operation has been
 * completed, wait for the completion, and retrieve the result of the I/O
 * operation. It also allows you to add {@link ChannelFutureListener}s so you
 * can get notified when the I/O operation is completed.
 * 
 * Netty提供了多种方法供你检查I/O操作的状态：已经完成了, 等待完成, 以及检索(retrieve)I/O操作的结果.
 * 同样呢, Netty还允许你向Future上添加{@link ChannelFutureListener} ,以便在I/O完成时能够收到通知
 * 
 * <h3>Prefer {@link #addListener(GenericFutureListener)} to {@link #await()}</h3>
 *
 * It is recommended to prefer {@link #addListener(GenericFutureListener)} to
 * {@link #await()} wherever possible to get notified when an I/O operation is
 * done and to do any follow-up tasks.
 * 
 * TODO
 * 
 * <p>
 * {@link #addListener(GenericFutureListener)} is non-blocking.  It simply adds
 * the specified {@link ChannelFutureListener} to the {@link ChannelFuture}, and
 * I/O thread will notify the listeners when the I/O operation associated with
 * the future is done.  {@link ChannelFutureListener} yields the best
 * performance and resource utilization because it does not block at all, but
 * it could be tricky to implement a sequential logic if you are not used to
 * event-driven programming.
 * 
 * {@link #addListener(GenericFutureListener)} 是非阻塞的. 它只是简单的向{@link ChannelFuture}
 * 添加一个 {@link ChannelFutureListener}, 然后如果和future相关联的I/O操作 完成的话, 则该I/O线程会通知listeners
 * {@link ChannelFutureListener} 会产生最佳的性能和资源利用, 因为它不会产生任何阻塞, 但是如果你没有使用过
 * 事件驱动编程的话, 实现一个时序逻辑会变成一个非常稽首的事情.
 * 
 * <p>
 * By contrast, {@link #await()} is a blocking operation.  Once called, the
 * caller thread blocks until the operation is done.  It is easier to implement
 * a sequential logic with {@link #await()}, but the caller thread blocks
 * unnecessarily until the I/O operation is done and there's relatively
 * expensive cost of inter-thread notification.  Moreover, there's a chance of
 * dead lock in a particular circumstance, which is described below.
 * 
 * 通过对比, {@link #await()} 是一个阻塞操作. 一旦调用了, 调用线程会一直阻塞到操作完成.
 * 通过{@link #await()} 来实现时序逻辑是非常简单的, 但是调用线程会一直阻塞到I/O操作完成, 这种线程阻塞是
 * 不必要的, 这是造成了 相对昂贵的线程间通知成本
 * 
 * <h3>Do not call {@link #await()} inside {@link ChannelHandler}</h3>
 * <p>
 * The event handler methods in {@link ChannelHandler} is usually called by
 * an I/O thread.  If {@link #await()} is called by an event handler
 * method, which is called by the I/O thread, the I/O operation it is waiting
 * for might never be complete because {@link #await()} can block the I/O
 * operation it is waiting for, which is a dead lock.
 * 
 * {@link ChannelHandler} 里的 event handler 方法一般是由I/O线程调用. 如果 {@link #await()} 
 * 被一个 event handler 方法调用, 也就是在I/O线程中触发了await, 那该I/O操作也许会永远不会完成, 因为 
 * {@link #await()} 造成的阻塞, 等待的可能是一个死锁!!!
 * 
 * <pre>
 * // BAD - NEVER DO THIS	不要{@link ChannelHandler} 方法里调用await相关方法.
 * {@code @Override}
 * public void channelRead({@link ChannelHandlerContext} ctx, GoodByeMessage msg) {
 *     {@link ChannelFuture} future = ctx.channel().close();
 *     future.awaitUninterruptibly();
 *     // Perform post-closure operation
 *     // ...
 * }
 *
 * // GOOD
 * {@code @Override}
 * public void channelRead({@link ChannelHandlerContext} ctx,  GoodByeMessage msg) {
 *     {@link ChannelFuture} future = ctx.channel().close();
 *     future.addListener(new {@link ChannelFutureListener}() {
 *         public void operationComplete({@link ChannelFuture} future) {
 *             // Perform post-closure operation
 *             // ...
 *         }
 *     });
 * }
 * </pre>
 * 
 * <p>
 * In spite of the disadvantages mentioned above, there are certainly the cases
 * where it is more convenient to call {@link #await()}. In such a case, please
 * make sure you do not call {@link #await()} in an I/O thread.  Otherwise,
 * {@link BlockingOperationException} will be raised to prevent a dead lock.
 * 
 * 尽管上文中提到了{@link #await()} 很多缺点, 但是有一种情形更适合使用{@link #await()}. 例如,
 * TODO
 * 
 * <h3>Do not confuse I/O timeout and await timeout</h3>
 * 不要混淆 I/O timeout 和 await timeout
 * 
 * The timeout value you specify with {@link #await(long)},
 * {@link #await(long, TimeUnit)}, {@link #awaitUninterruptibly(long)}, or
 * {@link #awaitUninterruptibly(long, TimeUnit)} are not related with I/O
 * timeout at all.  If an I/O operation times out, the future will be marked as
 * 'completed with failure,' as depicted in the diagram above.  For example,
 * connect timeout should be configured via a transport-specific option:
 * 
 * 通过方法 {@link #await(long)}, {@link #await(long, TimeUnit)}, {@link #awaitUninterruptibly(long)}, 
 * 或者 {@link #awaitUninterruptibly(long, TimeUnit)} 指定的timeout 值 是和 I/O timeout 无关的.
 * 如果I/O 发生timeout, future会以failure形式标记成完成状态, 如刚开始那个图画的那样. 
 * 例如连接timeout 应该通过 transport-specific option 来配置,而不是像下文那样通过awaitTimeout来完成这个目的.
 * 
 * <pre>
 * // BAD - NEVER DO THIS
 * {@link Bootstrap} b = ...;
 * {@link ChannelFuture} f = b.connect(...);
 * f.awaitUninterruptibly(10, TimeUnit.SECONDS);
 * if (f.isCancelled()) {
 *     // Connection attempt cancelled by user
 * } else if (!f.isSuccess()) {
 *     // You might get a NullPointerException here because the future
 *     // might not be completed yet.
 *     f.cause().printStackTrace();
 * } else {
 *     // Connection established successfully
 * }
 *
 * // GOOD
 * {@link Bootstrap} b = ...;
 * // Configure the connect timeout option.
 * <b>b.option({@link ChannelOption}.CONNECT_TIMEOUT_MILLIS, 10000);</b>
 * {@link ChannelFuture} f = b.connect(...);
 * f.awaitUninterruptibly();
 *
 * // Now we are sure the future is completed.
 * assert f.isDone();
 *
 * if (f.isCancelled()) {
 *     // Connection attempt cancelled by user
 * } else if (!f.isSuccess()) {
 *     f.cause().printStackTrace();
 * } else {
 *     // Connection established successfully
 * }
 * </pre>
 */
public interface ChannelFuture extends Future<Void> {

    /**
     * Returns a channel where the I/O operation associated with this
     * future takes place.
     */
    Channel channel();

    @Override
    ChannelFuture addListener(GenericFutureListener<? extends Future<? super Void>> listener);

    @Override
    ChannelFuture addListeners(GenericFutureListener<? extends Future<? super Void>>... listeners);

    @Override
    ChannelFuture removeListener(GenericFutureListener<? extends Future<? super Void>> listener);

    @Override
    ChannelFuture removeListeners(GenericFutureListener<? extends Future<? super Void>>... listeners);

    @Override
    ChannelFuture sync() throws InterruptedException;

    @Override
    ChannelFuture syncUninterruptibly();

    @Override
    ChannelFuture await() throws InterruptedException;

    @Override
    ChannelFuture awaitUninterruptibly();
}
