/*
1. 软件测试：在需求正确的前提下， 验证软件的功能是否满足用户的需求
目的： 保证和提高 软件的质量， 给用户交付一个高质量高可用度的一个软件

2. 软件测试和研发的区别：
	1.测试和调试
		测试是测试人员确保程序做了他应该做的事情，
		调试是程序开发人员确保程序做了他想要程序实现的功能
	2.与研发薪资
3. 集成
	1、在 linux 服务器上部署系统
	2、发布/发版
	3、执行测试脚本/自动化脚本
	4、输出测试报告
	5、email测试报告发送给相关人员·

*/
/*
软件中的需求
	1. 用户需求：简单的
	2. 软件需求：对用户需求的分析，形成比较详细的需求实现文档
	需求：满足用户的期望和规定的合同（标准，规范，流程）所需要的条件和权能，包含用户需求和软件需求

bug说明：
	当前仅当规格说明是存在的并且正确，程序与规格说明之间的不匹配才是错误
	当没有需求规格说明书时， 判断标准以最终用户为准，当程序没有实现其最终用户合理预期的功能需求时，就是软件错误。

	测试用例包含的要素：标题，测试环境（测试设备、测试系统），测试数据，测试步骤，预期结果，重要性

软件生命周期的6个阶段：
	需求分析、计划、设计、编码、测试、运行维护。

	5个模型：
		1. 瀑布模型：每个阶段是独立的，每个阶段只能执行一次，强调早期计划和需求调查（一步错步步错） 测试是产品的最后一道把关 软件测试也是基于瀑布模型去做的（适用需求比较稳定的项目，不能反复
		2. 螺旋模型： 把开发产品分为好几个阶段 每个阶段以原形为基础（都有风险分析） 注重风险分析，资金需求大 （适用于前期比较有风险 庞大 复杂的产品）

		系统需要做 A，B，C，D四个业务模块，两周完成
		3. 增量模型：第一周完成A，B模块，第二周完成C,D模块
		4. 迭代模型：第一周，先完成ABCD四个业务模块的基本功能， 不考虑复杂业务功能，
					第二周，在第一周完成的基础上， 进行功能的细化 完成复杂的业务功能
			两个模型都具有抗风险能力（迭代模型的抗风险能力大于增量模型，因为前者一开始考虑大局）
		5. 敏捷模型（轻量级，轻文档，轻流程，重目标，重产出）：
		一般迭代周期：2-4周
		参与人员： 5-9人
		宣言：
			个体与交互重于过程和工具（及时沟通）
			可用的软件重于完备的文档（文档简洁易懂，高质量可用的软件）
			客户协作重于合同谈判（软件整个开发过程当中 交流都很重要，客户和项目组之间的交流）
			相应变化重于遵循计划（适应需求的变化==》短期小计划，中期大目标，长远大方向）
		scrum为一种敏捷模型
		1. PO(project owner)：整理用户的需求， 转化为一个个很多user story（一个里面有可能有一个或多个用户的需求）然后形成 product backlog
		2. SM(scrum manager)：项目经理的角色，负责开发人员测试和PO之间的事务（负责各种会议） 保障敏捷流程能够正常进行下去
		3. ST（scrum team）：各种各样的开发人员组成，只要最终能达到目标就行 给开发和测试人员很大的空间（不限制）
		Sprint：迭代，一个开发周期
		敏捷开发的流程（重视交流）
			1. SM先把用户的需求整理成一个user story（形成product backlog）
			2. 发布计划会议，PO会把user story拿出来和大家评审，对user story进行整理排序，PO会把userstory解说，还会和SM，ST挑选出一些user story，确定本次迭代完成的user story
			3. 迭代发布会议：ST会把本个开发周期要做的user story具体到某个人（细化，形成scrum backlog，每个小的任务，分配给开发人员）
			4. 每日站会：大家站在一起讨论昨天做的事，遇到的问题和今天要做的计划，遇到问题的解决方式
			5. 演示会议：把迭代结果展示给老板和客户，有缺陷整理放到下一次迭代
			6. 回顾会议：看在此次迭代周期敏捷开发的做的好的，应用到下一次开发中 不好的 避免（进而优化敏捷流程）
	V模型和W模型
	1. V模型特点：每一个阶段的测试和相应阶段的开发两个是一一对应起来的（用户需求对应验收测试，需求分析与系统对应系统测试，概要设计对应集成测试，详细设计对应单元测试）前者都为软件开发相关，后者对应的为测试相关
		缺点： 测试是在编码以后才介入的，并不是在一开始需求分析就介入，如果设计有一些错误，我们在后期才能发现，不利于风险的控制和前期问题的发现
	2. W模型特点（双V模型）：一个V模型是开发准备的周期，一个V模型是测试准备的周期
	优点：在开发用户需求时就开始需求的验收测试的准备了，每个阶段更详细了，指出了开发每个阶段时测试要做的事情，
	缺点：每一个阶段的开始都是依赖于上一个阶段的完成（不灵活），不能用于敏捷开发这种模式当中的，阶段性很强

基础（接地气）：
	软件测试的声明周期：需求分析-测试计划-测试设计-测试开发-测试指向-测试评估
	软件开发的生命周期：需求分析-计划-设计-编码-测试执行-运行维护
	需求分析：把软件开发和软件测试的需求结合起来 细化，每一个功能点 根据每一个功能点再去设计用例
	测试计划是对测试范围和人员安排的计划，时间（本次迭代开始到产品发布的时间，要在产品发布之前测试完成）
	测试设计和测试开发（对测试用例进行设计 写测试用例的代码 ）
	测试执行（开发人员的编码已经完成了，对开发人员开发出来的功能进行测试是否符合功能） 也是对需求进行验证
	测试评估（对这次测试情况的评估，测试生成的bug，产品遗留的问题以及其解决方式 软件的质量进行评估），生产一个测试报告
		咨询开发人员这些问题怎样解决，
	
	如何描述一个bug？？
	·	1.需要知道出现问题的版本
		2.问题出现的环境（分硬件环境和软件环境，浏览器的版本，客户机操作系统 可能在某个浏览器上/机型上出问题）
		3.问题出现的步骤（怎样出现的问题）
		4.预期行为：让开发人员解释怎样才是正确的， 以用户的角度来描述程序的行为是怎样的， 如果是依据需求提出的故障， 能写明需求的来源是最好的（需求来源和当前bug所展现的行为）
		5.错误行为/现象/打印出来的日志（现象，证据）
		6.测试数据
	bug的级别（查看本公司的相应规范）-严重程度
		1.Blocker(奔溃）：死循环 代码错误 数据库数据丢失 死锁，系统不稳定了（当出现问题后，赶紧回退到老版本）
		2.Critical（严重）：1.系统主要功能没有实现 2.数据泄露 3.直播画面扭曲 4.密码明文显示 
		3.major（一般）：操作时间长，查询时间长，格式错误，边界条件错误，删除没有确认框，数据库表中的字段过多等
		4.minor(次要）：功能没有完全实现但是不影响使用，描述不清楚，提示语丢失，错别字，文字排列不整齐，

	禅道（分权限的）不同职位的人看到的内容不一样
	JIRA，tapd

	开始第一次测试：
		1. 阅读所有项目有关的文档
		2. 尽可能参加各种项目会议，了解项目背景，人员组成，尽可能了解需求和业务
		3. 熟悉项目所使用的测试管理工具，配置管理工具，获取对应的地址和登录方式
		4. 阅读已有的测试方案和测试案例
		5. 阅读已有的bug库，了解系统功能
		6. 了解规范要求 特别是编写规范 用例执行规范，bug提交规范，测试工具使用规范

	软件测试的生命周期
		需求分析-测试计划-测试开发，设计-测试执行-测试评估
	bug描述：
		（1）bug的环境(硬件,软件)（2）版本 (3)测试操作步骤 (4) 实际结果 (5)预期结果 (6)测试数据 (7) 功能模块
	bug级别: 奔溃(已经阻断了使用系统),严重(能运行但不稳定),一般(系统能稳定的运行,但是次要功能不能实现),建议(次要,界面影响用户体验,系统能稳定运行)

	
测试用例的设计方法
	测试用例包括(测试环境,操作步骤,测试数据,预期结果) 没有实际结果
	测试也是有级别的(重要与不重要)
	可操作性性强 (1.容易操作 2.可执行力强) 可维护性(是否可扩展)

	1. 基于需求(用户需求和软件需求)的设计
		再对每个功能点进行测试 (1)验证需求是都正确,完整,无二义性,逻辑一致 (2)看软件是否有问题

	2. 等价类基于输入(特殊情况下考虑输出), 将输入划分为若干个等价类, 从每个等价类中找出一个测试用例, 如果该测试用例测试通过, 该用例代表的等价类测试通过 (有效等价类和无效等价类都要测试)
		(1) 6-15位设计有效等价类和无效等价类
			等价有效类: [6,15]
			无效等价类: [1,5] [16,无穷大)
		(2) 只能输入字符 A-Z, a-z
			等价有效类: A-Z, a-z,大小写混用
			无效等价类: 数字, 特殊符号, 空格 ,汉字

	3. 边界值分析法(针对输入输出的边界进行测试用例的设计)
		不仅考虑边界值还要考虑边界值相邻的数
		查询页面 999行(998 999边界值  1000刚好显示不出来) 50行一页(0 1 2      49 50 51第二页)
		(1) 程序的需求为
			姓名: 1-20个字符, 不能包含数字,不能为空 
			年龄: 18-60之间的整数, 不能为空
			姓名:
				有效等价类: [1,20]个非数字且不能为空字符(大小写字母,特殊字符)
				无效等价类: 0, >=20, 全部输入数字(位数), 部分数字
				边界值: 0, 1, 2 19 20 21
			年龄:
				有效等价类: [18, 60]整数
				无效等价类: 空, [1-17], [61, 无穷大),非整数的字符(字母,特殊字符)
				边界值: 0 1 2     16 17 18   59 60 61

			 功能(正常,异常) 性能 界面 易用 兼容 安全

测试用例2:
	对手机号的位数进行等价类划分, 可以划分几个?     3(小于11位, 等于11位, 大于11位)


	恒等(男朋友和男生, 输入为真,输出为真)
	与(结婚的条件 有车有房缺一不可)
	或(只要有车或者有房就同意婚事)
	非(输入为假的情况下, 输出才为真)

	4. 因果图法设计步骤(表示输入各种组合和输出之间的逻辑关系图)
		1. 分析需求中所有的输入和所有的输出
		2. 找出输入和输出之间的关系
		3. 画因果图
		4. 根据因果图画判定表
		5. 根据判定表设计测试用例
			(1) 输入: 订单已经提交, 金额大于300 ,有红包
				输出: 优惠, 不优惠
			(2) 订单已提交, (中间结果)金额大于300没有红包,         优惠               1
  				订单已提交, (中间结果)有红包并且金额大于300,       优惠               2
			    订单已提交, (中间结果)有红包金额小于300,           优惠               3
				订单已提交, (中间结果)金额小于300并且没有红包,     不优惠              4
				订单未提交, (中间结果)                           不优惠(也是4种)      5
			三个输入 两个输出
			测试用例 1,2,3,4,5  2^5个测试用例
	因果图可以解决输入有多个奖,并且不同的组合都有一个结果, 当输入太多时(怎样投入最少,产出最大呢)

	5. 正交排列法: 当输出无穷多的情况下, 用正交性研究多因素多水平之间关系, 选取所有测试用例中最优的一个水平组合来进行测试试验, 通过研究这些水平组合的试验结果来分析整个测试的情况, 用尽量少(更少)的用例去覆盖整个测试结果
	组成:
		因素: 就是要考虑的变量 (T), 因素数就是因素的个数
		水平: 就是每个因素(变量)的值 (C), 水平数就是水平的值(变量的值取值一样且数量一致也就是水平量一致相等)
		正交表的行数: N = (C - 1)* T + 1
		正交表表示: L = N(TC)
		正交表的性质:
			1. 每一列出现的变量的个数一致
			2. 不同两列中变量出现的有序对数一致(相等)
		正交表设计测试用例的步骤:
			1. 首先找出所有因素
			2. 找出每个因素的水平(正交表必须满足每个因素的水平数相等的情况)
			3. 根据因素数和水平数确定合适的正交表
			4. 画正交表
			5. 在表中补充认为没有出现但是比较合理的测试用例
		题: 注册
			姓名,邮箱,密码, 确认密码, 验证码
		答案: 
			因素: 姓名, 邮箱, 密码, 确认密码, 验证码
			水平: 填写 , 不填写
			行数: 因素数T, 水平数C, 正交表N = (水平 - 1) * 因素数 + 1 = 6(个测试用例)


	产品说明书: 有一个处理担架为1元5角钱的盒装饮料的自动售货机软件,若投下1元5角硬币, 按下"可乐"或"红茶"按钮, 相应的饮料就会送出来, 若投的是2元硬币,在送出饮料的同时退还5角硬币
	1.
	输入: 1.5元, 2元
			按下"可乐", 按下"雪碧", 按下"红茶"
	输出: 5角硬币
		可乐, 雪碧 红茶
	2. 确定输入和输出之间的关系
		1.5元  按下"可乐"  可乐
			   按下"雪碧"  雪碧
			   按下"红茶"  红茶
		2元     按下"可乐"   可乐+5角硬币
				按下"雪碧"  雪碧+5角硬币
				按下"红茶"  红茶+5角硬币
		纵列为或  横行为与
	3. 画因果图
	4. 画判定表

	测试用例的力度
	测试用例的评价: 同行评价/用户检查(用户只会实现正向的检查)
	
	淘宝买东西:
		1. 成功登陆账户, 购买的书籍加入购物车, 成功结算, 支付成功
		2. 账户不存在, 登陆失败
		3. 密码错误, 登陆失败
		4. 成功登陆账户, 书籍库存不足,无法加入购物车 无法购买
		5. 网络故障, APP无法使用
		6. 成功登陆账户, 书籍加入购物差, 但是购物车已满
		7. 成功登陆, 书籍成功加入购物差, 成功进行结算, 只读是银行卡余额不足,无法购买
		8. 成功登陆, 书籍处于预售状态, 无法计入购物车,无法购买
		9. 成功登陆,书籍成功加入购物车, 成功进行结算, 未绑定银行卡, 支付失败, 无法购买
		10. 成功登陆, 书籍成功加入购物车, 结算时发现收货地址不在配送范围内,无法进行支付, 购买失败
		
		功能 性能 兼容 界面 安全 易用性

	6. 场景设计法(对同一个事件不同的选择 不同的触发就形成不同的场景)
		基本事件流: 每个操作都正常完成, 没有异常情况产生, 直到操作完成
		备选事件流: (1) 操作异常, 这个流程不能继续进行下去(流程中断)
				   (2) 操作有错误, 但是经过反复修改后, 流程可以继续正常进行下去
		1. 插卡,输入密码,输入金额,取钱,取卡
		2. 插卡不能识别, 不能取款
		3. 插卡,输入密码, 输入金额,ATM机钱不够,无法取款
		4. 插卡, 输入密码, 三次输错, 吞卡
		5. 任何一个环节操作超时时, 吞卡
		6. 机器故障, 无法取款
		7. 卡插反了, 重新插入, 输入密码, 输入金额, 取钱, 取卡
		8. 插卡, 输入密码, 第一次输入密码错误, 第二次输入密码正确, 输入金额, 取钱, 取卡
		9. 插卡, 输入密码, 输入金额>银行卡余额,重新输入, 取钱, 取卡(取款金额不是整百)
		10. 插卡, 输入密码, 输入金额, 用户已达到每日取款上线,无法取款.

	7. 错误猜测法(经验丰富的测试人员喜欢用的一种测试方法, 基于经验,找出程序中可能存在的错误, 有针对性地设计测试用例)



进阶:
按阶段划分：
	1. 单元测试(是在编码后或者编码前测试)确保对一个功能模块没问题  测试依据(在V模型中单元测试+详细设计文档) 纯白盒测试 ,局部变量
		TDD(Test Driven Develop 测试驱动开发 ---- 在代码还没写时对需求进行分析, 根据边界条件需求写测试脚本(未根据功能写) 执行脚本. 发现问题, 分析问题, 有针对性的填写开发,反复, 直到测试脚本完全通过) 
		优势: 开发人员一般是正向思维 测试考虑全面(脚本全面), 测试开发就bug少
		单元模块接口测试(有相应输入输出,对输入输出参数进行测试,)
		局部数据结构测试/路径测试/错误处理测试(try,catch,throw)/边界测试(for,while)
	2. 集成测试(按照一定的策略和方法把多个模块集合组装在一起,然后组装成的更大的模块进行测试
	单个模块性能最优 不能说明集成后的更大的模块就优(会增加或删除一些参数), 所以需要集成测试
	在单元测试之后进行 针对模块之间的接口, 测试依据(单元测试的模块+概要设计文档) 只看大的模块的整体的输入和输出,  黑盒测试和白盒测试相结合(测试方法)，测试力度更加关注内部逻辑
	测试内容: 模块之间数据传输(通过接口里面的参数是否符合规范和用户需求), 模块之间功能冲突(有冲突放在一起肯定是不符合需求的), 模块组装功能正确性(看组装最终的结果是不是符合用户需求), 全局数据结构(全局变量扭转了很多模块 看他的数据结构在变化之后还是否正确), 单模块缺陷对系统的影响(对单模块集成之后,那些细小的缺陷会被放大)

	3. 系统测试(单元测试对注册 登录 查询模块分别进行测试, 集成模块是把注册模块 功能模块 查询模块集成在一起进行测试, 系统测试对注册 登录 查询 记录信息 整个功能都完成之后(在集成测试完成之后进行测试) 对整个系统软件和硬件的测试): 测试力度更加接近用户使用
	测试人员: 黑盒测试工程师
	依据: 需求规格说明文档
	测试方法: 黑盒测试
	内容: 功能, 界面, 可靠性, 易用性, 性能, 兼容性, 安全性等

	4. 回归测试（包含两方面，测试人员在测试的时候不能仅看bug有没有被修复，还要看其他功能有没有因为修复这个bug而受到影响）: 提前把回归测试的用例转换为自动化测试脚本，当需要回归测试时直接测试自动化脚本即可，不需要再去测试所有可能影响到的功能，
	5. 冒烟测试：（在正式开始测试之前 先进行冒烟测试，先于系统测试，为了确定软件基本核心功能是否完成 存在问题。系统都有问题了那就没办法进行测试，如果软件的基本核心功能出现bug(奔溃、严重级别）
	6. 验收测试（交付测试）： 部署软件之前的最后一个测试操作， 技术测试的最后一个阶段，验收测试的目的是确保软件准备就绪，老板/第三方用户验收测试 软件正式在开发环境上部署的最后一个操作。 在系统测试之后软件发布之前，测试对象包括整个系统（包括软硬件），测试依据：用户需求，验收标准
	测试方法：黑盒测试， 测试内容：同系统测试（功能，各类文档（也是软件的组成部分）等）

	局部数据测试出现在哪一个测试阶段（单元测试）

按测试实施组织
	1. Alpha测试（是由一个用户在开发环境下，请到开发现场进行的测试，测试的内容——软件的内容（功能，局玉华，可使用性，可靠性，性能和支持））客户在开发环境下测试有局限性，受制于开发和测试人员的影响，测试时间集中
	2. Beta测试（也是验收测试，在实际的使用环境下测试，收集问题做成文档反馈） 随时随地进行测试，Alpha测试先于Beta测试
	3. 第三方测试（既不是开发人员也不是用户测试，软件测评机构（在国外多，国内不多））
按是否运行划分
	静态测试（不运行测试）：检查分析程序的语法结构（对人的要求高）
	动态测试（运行测试）：按照运行程序检查运行结果与预期结果的差异，分析运行效率，正确性和健壮性，有三部分组成： 构造测试用例，执行程序，分析程序的输出结果
按是否手工划分
	手工测试：
		优点：自动化无法代替按所需测试，发散思维结果的测试
		缺点：量大易错 执行效率慢
	自动化测试（自动化不能完全的测试手工测试）：就是在预设条件下运行系统或者应用程序，评估运行结果， 预先条件应包括正常条件好鹅一厂条件，简单说自动化测试是把以人为驱动的测试行为转化为机器执行的一种过程。有功能测试自动化，性能测试自动化，安全测试自动化
		通常所说的自动化测试是指功能化测试自动化
		自动化测试按照测试对象划分，还可以分为接口测试，UI测试（也就是界面自动化），接口测试的ROI（产出投入比）要比UI测试高， 界面测试需等到系统功能稳定了界面基本不会再修改了时再测（主要是根据界面的元素进行操作，适用于回归测试和兼容性测试）


自动化测试的流程
	1. 确定和搭建测试框架
	2. 写测试用例，把测试用例转换成自动化测试脚本
	3. 执行自动化测试脚本
	4. 输出执行结果报告
	5. 完善自动化测试脚本

按是否查看代码分为
	黑盒测试：也称功能测试，测试中把被测的软件当成一个黑盒子，不关心盒子里的内部结构是什么， 只关心软件的输入数据和输出数据（不关心软件的内部结构和逻辑，只关注输入和输出是不是符合我们的需求）
		（集成测试，冒烟测试，手工测试，系统测试，验收测试）
		黑盒测试的测试用例的设计方法：等价类，场景设计法，错误猜测法，边界值，因果图，正交排列法，按照需求
	白盒测试：也称结构测试，研究里面的源代码和程序结果（单元测试和集成测试中有）
		白盒测试的内容：1. 逻辑覆盖，2.循环覆盖，3.路径覆盖  
		白盒测试对象：代码结构（逻辑，循环，路径）
		做到语句覆盖，测判定条件，测路径，测判定组合，路径组合（if else加switch语句）
		跳出循环测 在循环内部测，等于边界条件也要测
	灰盒测试： 不仅关注输入输出的正确性，也要关注程序内部的正确性，多用于集成阶段
		
按照测试地域划分：
	软件本地化： 开发软件的时候利用语言技术和工程技术，使得软件可以适用不同的语言
	软件国际化： 开发软件的时候利用开发技术使得我们的软件能够适用不同的语言和文化风俗，并且不用修改任何源程序就可以使得软件本地化的一种技术

按测试对象划分：
	业务测试：把系统各个模块串起来运行，模拟真实用户实际的工作流程，满足用户需求定义的功能来进行测试（使用和看公司文档）
	界面测试：
	性能测试：关注时间响应（用户能接受的响应时间为3s,最佳2s),系统所能承受的最大负载量，在所能承受的负载量时用户的体验，如果系统超过预期的负载要有相应的处理机制（不能直接崩溃），运行时对系统资源的占用，占用的少了 跑起来就快了；执行间隔（平均多少秒向系统发一次请求）；日志事件（日志级别：Error，warn，debug，info)可以调试代码，记录一些重要的信息）
	内存泄漏测试：分配完内存后忘了回收；程序写法有问题，造成没办法回收；某些API函数的使用不正确，造成内存泄漏；没有及时释放；程序有异常捕捉用try catch finally）

