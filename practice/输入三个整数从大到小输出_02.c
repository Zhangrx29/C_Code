#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//int func(int a)
//{
//	int b;
//	switch (a)
//		case 1:b = 1;  //测试传参
//
//	return b;
//}


int main()
{
	//printf("%d", func(2)); //测试传参

	//随便输入三个整数从大到小输出
		//先排序 - 找最大的依次输出
	int a = 0;//三个整数
	int b = 0;
	int  c = 0;
	//输入
	scanf("%d %d %d", &a,&b,&c);
	//调整
	if (a < b)//如果num2小于num3就互换位置
	{
		int temp = a;
		a = b;
		b = temp;
	}

	if (a < c)
	{
		int temp = a;
		a = c;
		c = temp;
	}

	if (b < c)
	{
		int temp = b;
		c = b;
		b = temp;
	}

	//输出
	printf("%d %d %d", a, b, c);

	return 0;
}