#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf
#include <string.h>
//函数的嵌套调用和链式访问 --- 定义函数时不能嵌套定义, 但是可以嵌套调用

//嵌套调用
void test2()
{
	printf("hhh\n");
}
int test1()
{
	test2();

}
int main()
{
//嵌套调用
	test1();//函数调用时嵌套 - 第11行

//链式访问
	//不用链式访问时
	int len = strlen("abcde");
	printf("%d\n", len);
	//使用链式访问
	printf("%d\n", strlen("abc"));

	char arr1[20] = { 0 };
	char arr2[] = "abcd";
	printf("%s\n", strcpy(arr1, arr2));
	
	printf("%d", printf("%d", printf("%d", 43)));//printf函数返回的是打印在屏幕上的字符的个数,先打印43,然后返回2个字符,然后打印2,再返回一个字符,然后打印1

	//函数的声明与定义


	return 0;
}