#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int Digitsum(int n)
{

	if (n>9)//确保是二位数以上才递归
		return Digitsum(n / 10) + n % 10;//加上最后一位
}

int main()
{
	int num = 1729;
	int tem =Digitsum(num);
	printf("%d",tem);
	return 0;
}