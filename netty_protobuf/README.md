# 基于Netty和Protobuf构建的NIO服务器 #
## 实现的功能 ##
1. 实现了Http服务器
2. 实现了纯socket服务器
3. 添加了对mybatis的支持
4. 添加了对quartz的支持
5. 使用spring管理mybatis和quartz
6. 添加了log4j功能
7. 完成了业务单元测试框架(不基于网络通信)

## 待完善的 ##
1. 测试使用NioEventLoopGroup业务线程池的网络承载量
2. 添加disruptor对并发支持
3. 添加akka actor对并发的支持
4. 添加kilim对并发的支持
5. 打包工具
6. 服务器启动脚本(jvm配置)
7. IdleStateHandler处理
8. 合理设置接收和发送缓冲区容量
9. CLOSE_WAIT,close_wait状态的链路并不释放句柄和内存等资源，如果积压过多可能会导致系统句柄耗尽,及时关闭socket
10. 合理的心跳周期
11. 是否需要在代码里添加对nginx支持
12. 添加ID生成策略
13. 添加cobar分库支持
