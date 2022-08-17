#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int main()
{
	int a = 10; 
	int* pa = &a;//a是int,占四个字节,四个地址, &a拿到的是四个字节中第一个字节的地址
//指针类型的意义
	a = 0x11223344;//1个16进制数字表示4个2进制数字
	pa = &a;
	*pa = 0;
	return 0;
}