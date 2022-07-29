#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//01.整形有序数组的二分查找
int search(int a[], int b, int c)
{
	int left = 0;//数组的第一个下标
	int right = c - 1;//元素的个数-1 == 下标的总长度
	int mid = (left + right) / 2;//中间元素下标
	int i;
	for (i = 0; i <= right;i++)//说明数组中间有元素 - 可以被查找
	{ 
		if (a[mid] == b)
			return a[mid];
		else if (a[mid]>b)//找大了
		{
			mid--;//减一,提示容错率
			mid /= 2;
		}
		else if (a[mid]<b)//找小了
		{
			mid += right + 1;
			mid /= 2;
		}
	}
	return -1;//没找到
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 11;
	int x = sizeof(arr) / sizeof(arr[0]);//元素个数

	printf("%d",search(arr, key, x));//在arr数组的x元素里找key

	return 0;
}