#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

void init(int arr[], int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[], int sz)
{
	int least = 0;
	int max = sz - 1;

	while (least < max)
	{
		int tem = arr[least];
		arr[least] = arr[max];
		arr[max] = tem;
		least++;
		max--;
	}
}

int main()
{
	//	1.实现函数init() - 初始化数组全为0
	//	2.实现print() - 打印数组的每个元素
	//	3.实现reverse() - 完成数组元素的逆置

	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);//数组元素个数

	reverse(arr1, sz);
	print(arr1, sz);
	init(arr1, sz);
	print(arr1, sz);


	//将数组A的内容和数组B的内容进行交换(数组一样大)
	int A[] = { 1,2,3,4,5 };
	int B[] = { 6,7,8,9,10 };
	int i ;
	sz = sizeof(A) / sizeof(A[0]);
	for (i = 0; i < sz; i++) 
	{
		int tem = A[i];
		A[i] = B[i];
		B[i] = tem;
	}
	print(A, sz);
	print(B, sz);

	return 0;
}