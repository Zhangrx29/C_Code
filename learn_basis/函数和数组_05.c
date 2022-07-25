#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//函数

int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	
	int num_1 = 0;
	int num_2 = 0;
	scanf("%d,%d", &num_1, &num_2);

	//不是函数的方式相加
	//int add = num_1 + num_2;
	//printf("%d", add);
	
	
	//函数的方式
	int num = Add(num_1, num_2);//将sum_1和sum_2执行Add函数 - Add函数需要定义-第6行

	printf("%d", num);


	//数组 - 一种相同类型的元素的集合
	//创建
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//数组arr有10个元素,分别是右值1,2,3,4,5......
	char ch[5] = { 'a','b','c' };//右值元素个数不满左值的指定个数时,右值剩下的元素为0
	//访问 - 通过下标访问
	int i = 0;
	printf("%c\n", ch[0]);//访问ch数组的0的位置的元素

	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}

	return 0;
}
