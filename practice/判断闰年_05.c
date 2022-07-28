#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf


//判断一千-二千年的闰年
int main()
{
	int i;
	int count = 0;
	for (i = 1000; i <= 2000; i+=4)
	{
		if ((i % 100 != 0) || (i % 400 == 0))//能被4整除并且不能被100整除 或 能被四百整除
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d",count);

	return 0;
}