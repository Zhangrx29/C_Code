#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int main()
{
	int arr[10] = { -2,-5,-8,-3,-4,-8,-5,-4,-5,-6 };
	int i;
	//int num = 0;//这样写如果全都小于0了那就算不出来最大了
	int num = arr[0];//在数组已有的元素里挑第一个元素假设为最大
	for (i = 1; i < 10; i++)//然后从第2个元素开始遍历,遍历到最大的元素-1(下标从0开始)
	{
		if (arr[i] > num)
			num = arr[i];
	}
	printf("%d", num);
	return 0;
}