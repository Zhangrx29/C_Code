#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//打印一到一百
int main()
{
	//可以创建一个数组,依次遍历添加
	int arr[100] = { 0 };
	int n;
	for (n = 0; n < 100; n++)
	{
		arr[n] = n + 1;//遍历添加
		if (arr[n] % 3 == 0)
			printf("%d, ", arr[n]);
	}

	//更简单一个方法
	printf("\n更简单一个办法\n");
	int i;
	for (i = 3; i < 100; i += 3)
		printf("%d ",i);
	

	return 0;
}