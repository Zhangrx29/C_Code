#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//判断素数 - 质数 - 只能被1和它本身整除

int main()
{
	//判断i是否为素数
	int i;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;//在for循环中,break跳出当前循环
			}
		}
		if (i == j)
		{
			printf("%d ", i);
		}

		
	}

	return 0;
}