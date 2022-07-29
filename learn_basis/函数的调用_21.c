#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//传值调用 - 形参和实参分别占有不同的内存块,对形参的修改不影响实参
	//把变量a,b传到形参 - 形参和实参没必然的联系,形参只是实参的临时拷贝,不会影响实参
//传址调用
	//把a和b取地址传到形参 - 传的如果是地址,形参就应该是指针变量,形参和实参之间会建立联系,也就是函数内部可以直接操作函数外部的变量

//练习
//1 写一个函数可以判断一个数是否是素数
int prime(int n)
{
	//2->n-1的数字试数n
	int j = 0;
	for (j = 2; j < n; j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

//2 判断闰年
int leap_year(int a)//一个函数如果不写返回类型,则默认返回int类型
{
	if ((a % 4 == 0) && (a % 100 != 0) || a % 400 == 0)//判断闰年
		return 1;
}


//
int main()
{
	int i;
	int count = 0;
	//1.判断100-200的素数
	for (i = 100; i <= 200; i++)
	{
		//判断i是否素数 - 如果是判断的话不要在函数里打印, 设计函数仅仅给它完成一个独立功能就行了
		if (prime(i) == 1)//如果返回的值为1
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n总共%d个素数\n", count);

	//2.写一个函数判断是否闰年
	int year ;
	count = 0;
	for (year = 1000; year <= 2000; year += 4)
	{
		if (leap_year(year) == 1)
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\n%d个闰年\n", count);

	return 0;
}