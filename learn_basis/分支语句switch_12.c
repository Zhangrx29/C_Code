#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//switch常常用于多分支
//语法
	//switch (整形表达式)//整形表达式的整数值会匹配语句项的整数进行执行
	//{
	//		语句项;
	//}
//语句项语法
	//case 整形常量表达式:
		//语句块;


int main()
{
	int num = 0;
	scanf("%d", &num);
	switch (num)//整形表达式
		//字符也可以,因为字符使用ASCII码值存储的
	{
	case 1+1-1://整形常量表达式
		printf("今天是星期一");
		break;//如果不加break,他会一直往下执行
	case 2:
		printf("今天是星期二");
		break;
	case 3:
		printf("今天是星期三");
		break;
	case 4:
		printf("今天是星期四");
		break;
	case 5:
		printf("今天是星期五");
		break;
	case 6:
		printf("今天是星期六");
		break;
	case 7 :
		printf("今天是星期天");
		break;
	printf("\n--------------------------\n");

	}

	//如果改成输入1-5结果为工作日,6-7为休息日
	switch (num)
	{
	printf("--");//不会执行,输入的num会直接跳转到对应的语句项
	case 1 :
	case 2 :
	case 3 :
	case 4 :
	case 5 ://前边的没有break,所以输入的话会继续往下执行到结束或遇到break
		printf(" --工作日");
		break;
	case 6 :
	case 7 :
		printf(" --休息日");
		break;

	default://所有都没有匹配到的话就是default(默认)
		printf("输入错误");
		break;
		

	}


	return 0;
}