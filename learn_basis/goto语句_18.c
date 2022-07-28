#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf
#include <string.h>
#include <stdlib.h>

//goto语句
	//C语言中提供了可以随意滥用的goto语句和标记跳转的标号
	//很少会用,语句可能会让代码更乱

int main()
{
	//flag:
	//	printf("hehe");
	//	printf("hehe");

	//	goto flag;//跳转到flag - 导致死循环

//有些地方会用到
//关机程序↓
	//shutdown -s -t 60 设置关机
	//shutdown -a 取消关机
	//system()函数 - 执行系统命令
	system("shutdown -s -t 60");//需要引用头文件 - stdlib.h
	
	char input[] = { 0 };
 
again:
		printf("注意:你的电脑将在一分钟内关机,如果输入:\"爸爸\"可取消关机\n");
		scanf("%s", input);
		if (strcmp(input, "爸爸")==0)//需要引用头文件 - string.h
		{
			system("shutdown -a");
		}
		else
		{
			printf("别挣扎了,快叫吧(^_^)\n");
			goto again;
		}

	//某些场景goto还是用得着的,最常见的用法就是终止程序在某些深度嵌套的结构的处理过程,例如一次跳过两层或多层循环
		//只能在本函数范围跳出,不可跨函数
		

	return 0;
}