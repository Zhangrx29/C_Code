#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int main()
{
	int a = 0;
	printf("年龄:");
	scanf("%d", &a);
	//多分支循环
	if (a <= 12)
	{
		printf("小学生");
	}

	else if (a < 18)
	{
		printf("青少年");
	}
	else if (a < 26)
	{
		printf("成年");
	}
	else if (a < 40)
		printf("中年");
	else if (a < 60)
		printf("壮年");
	else if (a < 100)
		printf("老年");
	else
		printf("真长寿!!");
	printf("\n");

	//打印1-100奇数
	printf("打印1-100奇数\n");
	int b = 0;
	while (b < 100)
	{
		b++;
		if (b % 2)
		{
			printf("%d\t", b);
		}
		
	}
	return 0;

}