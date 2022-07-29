#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//每调用一次函数,num将+1
void Add(int* pa)//如果传的是地址,那么接收是指针变量
{
	(*pa)++;
}

//01.整形有序数组的二分查找
//int search(int a[], int b, int c)
//{
//	int left = 0;//数组的第一个下标
//	int right = c - 1;//元素的个数-1 == 下标的总长度
//	int mid = (left + right) / 2;//中间元素下标
//	int i;
//	for (i = 0; i <= right;i++)
//	{ 
//		if (a[mid] == b)
//			return a[mid];
//		else if (a[mid]>b)//找大了
//		{
//			mid--;//减一,提示容错率
//			mid /= 2;
//		}
//		else if (a[mid]<b)//找小了
//		{
//			mid += right + 1;
//			mid /= 2;
//		}
//	}
//	return -1;//没找到
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 11;
//	int x = sizeof(arr) / sizeof(arr[0]);//元素个数 -- 不能在函数内部求 因为 ↓
//	printf("%d",search(arr, key, x));//在arr数组的x元素里找key  -- 传递数组,实际上传递的并不是数组本身,而是把第一个元素地址传进去(指针),所以求不出元素个数
//
// //每调用一次函数,num将+1 -- 第4行定义的函数
// 	int num = 0;
//Add(&num);//要让函数修改外部的变量,需要传地址进行链接
//printf("%d\n", num);//1
//
//Add(&num);
//printf("%d\n", num);//2
//
//Add(&num);
//printf("%d\n", num);//3
// 
//	return 0;
//}