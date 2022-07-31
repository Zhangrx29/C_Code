#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf
#include <math.h>

double Pow(int a, int b)
{
	if (b == 0)
		return 1.0;
	else if (b > 0)
		return a * Pow(a, b - 1);
	else
		return 1.0 / Pow(a, -b);//传进来的时候是负数,然后负负得正,最后除1
	

}

int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	double a =Pow(num1, num2);
	printf("%lf", a);
	return 0;
}