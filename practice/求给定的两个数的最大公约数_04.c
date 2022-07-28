#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//求两个数的最大公约数
int main()
{
	//int num1 = 0;
	//int num2 = 0;
	//scanf("%d %d", &num1, &num2);
	////可以先找出较小的一个数字,依次往下减,当可以同时除以两个数就是他们的最大公约数
	//int max = 0;
	//if (num1 > num2)
	//	max = num2;
	//else
	//	max = num1;//找出较小的一个数字

	//while (1)//依次递减,直到可以同时除以2个数
	//{
	//	if (num1 % max == 0 && num2 % max == 0)
	//	{ 
	//		printf("最大公约数是%d\n", max);
	//		break;
	//	}
	//	max--;
	//}

	//还有一种方法	 -	辗转相除法
	//大的数a取余小的数b的结果c不为0时,b再取余c得到一个新的c,依此类推,直到结果为0
	int a = 0;
	int b = 0;
	int c = 1;
	scanf("%d %d", &a, &b);
	if (a < b)//将大的数赋值给a,方便计算
	{
		int tem = a;
		a = b;
		b = tem;
	}

	while (1)
	{
		if (c != 0)
		{
			c = a % b;//计算结果 //如果c=0,说明b就是结果
			if (c != 0)
			{
				a = b;
				b = c;
			}
		}
		
		if (c == 0)
		{
			printf("最大公约数为%d", b);
			break;
		}

	}

	return 0;
}