#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int Digitsum(int n)
{

	if (n>9)//ȷ���Ƕ�λ�����ϲŵݹ�
		return Digitsum(n / 10) + n % 10;//�������һλ
}

int main()
{
	int num = 1729;
	int tem =Digitsum(num);
	printf("%d",tem);
	return 0;
}