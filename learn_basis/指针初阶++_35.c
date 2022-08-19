#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int main()
{
//指针和数组 - 数组名是首元素地址
	int arr[5] = { 1,2,3,4,5 };
	int* p = arr;
	//	a[b]	操作符在计算机运算时是转换为 *( a + b ), 根据加法交换律,可以反过来写 
	printf("%d\n", 3[arr]);//	访问arr数组的第三个下标
	printf("%d\n", p[4]);//		* ( p + 4 )
	//	arr[2] == *(arr+2) == *(2+arr) == *(p +2) == *(2+p) == 2[arr]


//二级指针
	int a = 10;
	int* pa = &a;//pa是指针变量, 一级指针 , 他只有一层指向关系,指向了a

	int** ppa = &pa;
	printf("%d\n", **ppa);//	**ppa == *pa = a	*ppa = pa


//指针数组 - 存放指针的数组
	int* parr[5];//每个元素都是整型类的指针 - 整形指针数组
	char arr[5];//字符数组


	return 0;
}