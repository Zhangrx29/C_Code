#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int main()
{
	//int a = 1;//初始化
	//int arr[5] = { 1,2,3,4,5 };//完全初始化
	//int arr2[5] = { 1,2,3 };//不完全初始化
	//char ch1[5] = "bit";//	b i t \0 0
	//char ch2[] = "bit";//		b i t \0

	//依次打印数组的地址
	int arr[5] = { 1 };
	int i = 0;
	for (i = 0; i < 5; i++)
		printf("%p\n", &arr[i]);
	return 0;
}