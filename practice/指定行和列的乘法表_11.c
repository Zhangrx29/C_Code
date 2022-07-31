#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

void print_table(int line)
{
	int i = 0;
	for (i = 1; i <= line; i++)
	{
		int num = 0;
		for (num = 1; num <= i; num++)
		{
			printf("%2d * %2d= %2d ", i, num, i * num);
		}
		printf("\n");
	}
}

int main()
{
	
	int line = 0;//ÐÐ
	scanf("%d", &line);
	print_table(line);


	return 0;
}