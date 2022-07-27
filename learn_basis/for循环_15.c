#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//for循环
//语法
	//for(表达式1;表达式2;表达式3)  -  表达式1(初始化); 表达式2(判断); 表达式3(调整)
		//	循环语句

int main()
{
	int i =0;
	for (i = 1; i <= 10; i++)// 顺序1 -- i = 1;(初始化)  顺序2 -- i <= 10;(判断)  顺序4 -- i++(调整)
		//外层for循环初始化只执行一次
	{
		if (i == 5){}
			//break;	//在for循环中,break用于终止所有循环  -  结果为1234
			
			//在for循环中,continue用于结束本次循环,然后判断下一次循环是否执行 - 结果为1234 678910 
				//按照顺序1234,这里为顺序3,用continue直接跳过就该执行顺序4了
		printf("%d\n ", i);//顺序3 -- 循环语句
	}
	//for循环一些建议
		//最好不在for循环体内修改循环的变量,防止for循环失去控制

	//for循环的一些变种
	//1
		//for ( ; ;) //把3个表达式都省略就会一直是真 - 反复循环
		
	//2
	int j =0;
	int o =0;
	for (; o < 3; o++)
	{
		for (	; j < 3; j++)
		{
			printf("hehe\n");//执行了9次
		}
	}
				

	return 0;
}