#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf


void text()
{
	static int a = 1;//加上scanf让这个局部变量出范围后不会消耗并且下一次循环a为上一次执行结束后的值,不会重新赋值为1			创建静态后不销毁且生命周期变长
	a++;
	printf("%d", a);

}


int main()
{
	//C语言提供的关键字
		//C语言提供的,不可自己创建
		//关键字不可做为变量名
		
	//常见关键字
	

		//	auto - 自动的 - 每个局部变量都是auto修饰的
		{
			auto int a = 10;//自动创建,自动销毁 - 自动变量		局部变量前的auto一般都是省略掉的
			//也有其他用法,暂时不考虑
		}
		//	break if语句,循环等用到
		//	case
		//	char - 字符类型
		//	const - 常变量
		//	continue - 继续
		//	default - 默认
		//	do - do循环
		//	double - 双精度类型
		//	else - if循环等用到
		//	enum - 枚举
		//	extern - 声明外部符号
		// float - 单精度类型
		// for - for循环
		// goto - goto语句
		//	if -if语句
		//	int - 整形
		// long -长整型
		// register - 寄存器关键字 - 现在有些内容会自动放到寄存器,所以这个关键字不经常用
			register int num = 100;//建议num的值存放在寄存器中,最终是否存放?编译器做决定
			//计算机的数据可以存储到
				//网盘 - 严格意义来说不是本机的,是联网之后才能存放(比如百度网盘) 几个T	速度最慢
				//硬盘	D盘E盘....512G	速度偏慢
				//内存	8G-16G	速度中等
				//高速缓存	几十Mb	速度快
				//寄存器	更小	速度最快

		//	return - 返回值
		//	short - 短整型
		//	signed	- 有符号的 比如符号位 +10  -10
		//unsigned - 无符号的 没有符号位的概念
		//	sizoef - 求大小
		// static - 静态的
			// 01.修饰局部变量
			// 02.修饰全局变量
			// 03.修饰函数
				int i = 0;
				while (i < 10)
				{
					text();//text函数已经在第5行定义
					printf("\n");
					i++;
				}

		// struct - 结构体
		// swich - swich语句
		// typedef - 类型重定义(类型重命名)
			typedef unsigned int u_int;//这个最好在main外定义
			u_int nums = 100;//还是int类型,名字重命名了
			printf("\nnums=%d\n", nums);
			
		//	union - 联合体(共用体)
		// void - 无(空)
		// volatile - 段位关键字
		// while - while循环

	return 0;
}