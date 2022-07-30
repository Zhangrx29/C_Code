#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int my_strlen(char* str)//数组传进来的是第一个元素的地址(指针)所以接收的也要是指针变量
{
	if (*str != '\0')//这个	*str是它本身指向的地址
		return 1 + my_strlen(str + 1);//1+1+1+1+0		//这个str+1是下一个字符的地址		//指针默认指向数组首位, +1让它指向下一位元素
			//递归中最好不用++
	else
		return 0;//如果是\0那长度也就是0了,所以return 0

}
////如果递归实现的话效率比较低
//int Fib(int a)
//{
//	if (a < 3)
//		return 1;
//	else
//		return Fib(a - 1) + Fib(a - 2);
//
//}

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)//第四个开始fib数才这样算
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;//如果小于3那就返回1,因为fib前2个就是1
}

int main()
 {
//练习 - 不能创建临时变量,模拟实现一个strlen函数 - 第4行
	char arr[] = "abcd";
	printf("%d\n", my_strlen(arr));

//有一些功能可以使用迭代(循环)来实现,也可以用递归实现
	//求第n个斐波那契数
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", Fib(num));
	return 0;
}