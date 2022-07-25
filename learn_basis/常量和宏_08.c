#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf


//define是一个预定义符号
//	01.定义常量
	#define Max 1000//定义一个Max常量为1000
// 02.定义宏
#define Add(x,y) x+y	//有一些毛病 ->15行
//看完15行修改后
#define new_Add(x,y) ((x)+(y))//它可能不是个变量,是个表达式,所以把x,y括起来,再把整体的宏体括起来


int main()
{
	printf("%d\n", Add(5, 5));//10
	printf("%d\n", 4 * Add(2, 5));//13
		//为什么结果不是28 - define定义宏是替换的, 4*Add(2,5)变成了4*2+5

	//继11行定义宏修改后
	printf("%d\n", 3 * new_Add(2 , 5));//21

	return 0;
}