#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf


//内存是怎么编号的?
	// 32位 - 32跟地址线 - 物理线 - 可以通电 - 1/0(正负电)
		//电信号转换为数字信息:1和0的二进制序列
			//32个二进制数字
				//0000 0000 0000 0000 0000 0000 0000 0000 
				//0111 1111 1111 1111 1111 1111 1111 1111
				//.......
				//1111 1111 1111 1111 1111 1111 1111 1111    
				//2的32次方个序列,都可以作为内存编号,这个内存编号称为这个内存单元的地址
					//总共有2的32次方个内存单元
	

//总大小是2的32次方个字节---- - = 512Gb
//十六进制表示为1~9和A~f(A~F表示10~15)

//一个内存单元是多大的空间
	//一个内存单元是一字节(8比特位) 

//指针 就是 地址
int main()
{
	int a = 10;//a在内存中要分配空间 - 大小位int - 4字节
		//怎么看哪四个字节   先开启调试  ->  然后打开菜单栏的 调试 - 窗口 - 内存
			//拿到的地址是四个字节的第一个字节的地址 
			printf("%p,\n",&a);//打印a的地址		%p用于打印地址
			int * pa = &a;// pa=a的地址,C语言中的pa是叫指针变量
				//	* 说明变量pa是指针变量
				//	int 说明变量pa指向的对象是int类型 - 因为a是int类型,所以是int *
			printf("pa的地址为%p\n", pa);
			printf("a的地址为%p\n", &a);//a的地址变了后,a的指针变量pa也会跟着变

	char b = 'w';
	char* pc = 'w';//因为变量b是char类型,所以他的指针变量也要是char类型
	printf("%p\n", pc);

	char* pb = &pc;//指针变量pb存取指针变量pc的内存类型

		printf("%d\n", a);
	//存地址后如果找
		*pa = 20;// *pa 就是通过pa指向的地址,找到a 然后修改这个地址的值为20,	
			//pa的地址是一直指向着a,  所以a的地址变化后,pa也会变化(pa一直指向a)
			//这里的*为解引用操作符(单目操作符)
		printf("%d\n", a);


//指针变量有多大 - 还是sizeof
		printf("%d\n", sizeof(char*));//字符指针是用 (类型)* 定义
		printf("%d\n", sizeof(int*));
		printf("%d\n", sizeof(short*));
		printf("%d\n", sizeof(long*));
		printf("%d\n", sizeof(long long*));
		printf("%d\n", sizeof(double*));
		//32位存储需要 32个比特位是4个字节
		//64位存储需要 64个比特位是8个字节
		//我的电脑是64位,所以地址大小是64比特位=8字节
			//指针用来存放地址的,指针有多大取决于地址的存储需要多大空间

	return 0;
}