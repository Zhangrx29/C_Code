#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf


//自定义函数
	
//写一个函数找出2个整数中的较大值
//这个函数在调用时,实参传给形参,形参只是实参的临时拷贝
//改变形参不会修改实参
int get_Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

//写一个函数可以交换两个整型变量的内容
//函数返回类型写成void,表示这个函数不返回任何值,也不需要返回
//有问题↓
//void swap1(int x, int y)//创建了一个x,y
//{
//	int tem = x;//修改x,y
//	x = y;
//	y = tem;//修改后不会影响下面的a和b,因为不是同一块空间
//}

//修改后↓

void swap1(int* pa, int* pb)//创建pa,pe,放的是a和b的地址
{
	int z = *pa;
	*pa = *pb;
	*pb = z;//不用取地址z, 原样是 *pb = 10,如果加上取地址就变为取10的地址了
}

//
int main()
{
	//2个整数中的较大值
	printf("%d\n",get_Max(5, 8));
	//交换2个整形变量的值

	//代码有问题↓
	//int a = 10;
	//int b = 20;
	//printf("交换前a=%d,b=%d\n", a, b);
	//swap1(a, b);//看第18行
	//printf("交换后a=%d,b=%d\n", a, b);

	//修改后
	int a = 10;
	int b = 20;
	printf("交换前a=%d,b=%d\n", a, b);
	swap1(&a, &b);//往函数里传入地址就能联系起来了
	printf("交换后a=%d,b=%d\n", a, b);
////什么时候传地址进去
	//需要在函数内部修改的变量, 也会修改函数外部的变量. 所以要把地址传进去建立联系

////函数的参数
	//形参 - 定义部分的参数 - 形式参数调用完会自动销毁,所以形式参数只在函数中有效(生命周期)
	 
	
	//实参 - 调用部分的参数 - 实参可以是常量, 变量, 表达式, 函数等
		//传函数
		printf("%d\n", get_Max(5, get_Max(4,6)));//get_max计算5和get_max(4,6)这两个数的最大值


	return 0;
}