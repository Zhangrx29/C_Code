#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//����1/1 - 1/2 + 1/3 - 1/4......+ 1/99 - 1/100
int main()
{
	double a = 1;//������  
	int b = 1;//����
	double num1 = 0;//ͳ�ƼӼ�  //С��
	for (b = 1; b <= 100; b++)
	{
		if (b % 2 == 0)//����Ϊż��ʱ����
		{
			num1 = num1 - (a / b);
		}
		else
		{
			num1 = num1 + (a / b);
		}
	}
	printf("%lf", num1);
	return 0;
}