#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

/////尝试递归做出,失败失败失败
////int count(int i,int num)
////{
////	if (i < 100)
////	{
////		if (i % 10 == 9 )//个位
////			return num+1 ;
////			if (i / 10 == 9 )//十位,分开写是因为能算到99的2个9
////				return num+1;
////			else
////			{
////				count(i + 1,num);
////			}
////
////	}
////}

int count(int a, int b)//开始的数字,结束的数字
{
	int count = 0;//计数
	for (; a < b; a++)
	{
		if (a % 10 == 9)
			count++;
		if (a / 10 == 9)
			count++;
		else
			continue;
	}
	return count;

}


int main()
{
	int a = count(1,100);
	printf("%d ", a);
	return 0;
}