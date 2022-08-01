#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//一维数组是一行
//二维数组是有行有列的

int main()
{
//创建
	int arr[3][4];//int类型的数组,三行四列
//初始化 - 创建的同时赋值
	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//完全初始化
	//某个值放在某一行
	int arr2[3][4] = { {1,2},{3,4},{5,6} };//第一行放上12,第二行放上34,第三行放上56
	//初始化的行可以省略,列不能 
//使用
	//行和列下标也是从0开始
	//打印全部的元素
	int i;
	int j;
	for (i = 0; i < 3; i++)//行
	{
		for (j = 0; j < 4; j++)//列
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
//二维数组在内存中的存储

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("&arr2[%d][%d] = %p\t", i, j, &arr2[i][j]);// int四字节 每个地址相差4
		}
		printf("\n");
	}
//其中两个用途
	//指针访问 - 内存是连续存放的
	int* pa = &arr2[0][0];//第一个地址
	for (i = 0; i < 12; i++)//三行四列,12个元素,
	{
		printf("%d ", *pa);
		pa++;
	}

	return 0;
}