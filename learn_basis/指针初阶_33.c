#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int main()
{
	int a = 10; 
	int* pa = &a;//a��int,ռ�ĸ��ֽ�,�ĸ���ַ, &a�õ������ĸ��ֽ��е�һ���ֽڵĵ�ַ
//ָ�����͵�����
	a = 0x11223344;//1��16�������ֱ�ʾ4��2��������
	pa = &a;
	*pa = 0;
	return 0;
}