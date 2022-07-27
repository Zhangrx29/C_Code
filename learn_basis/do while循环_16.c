#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//do while循环
//语法
//do 
//		循环语句;
//while(表达式);
//和while的区别,while是先判断再执行,do while是先执行再判断

int main()
{
	//int a = 0;
	//do
	//{
	//	if (a % 2 == 0)
	//	{ 
	//		printf("%d\n", a);
	//		
	//	}
	//	a++;
	//} while (a <= 10);
	//do while的特点是循环至少执行一次
	printf("-------计算阶乘-------\n");
	
	//int num = 0;
	//scanf("%d", &num);
	//int num2=num--;
	//for (; num != 0; num--)
	//{
	//	num2 *= num;
	//}
	//printf("%d", num2);
	printf("\n------计算阶乘的和------\n");
	
	int a = 0;
	int b = 0;
	int c = 1;
	int d = 0;
	scanf("%d", &a);

	for (;a != 0;a--)//依次减到1
		for (b = 1,c =1; b <= a; b++)//a依次减1
		{
				c *= b;
				if (b == a)
				{
					d += c;
					printf("%d\n", d);
				}
		}

	//在一个有序数组里查找具体的某个数字n
		//对于一个有序数组,使用二分查找更高效
			//可以先查找一个中间数, 然后中间数加上最大数除以二,等于中间数和最大数之间的中间数,依此类推
	int nums[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n = 10/2;//数组的长度
	int y = sizeof(nums) / sizeof(nums[0]);//sizeof - 大小, 总大小除以第一个元素大小, 就是元素总个数
	int Z = 0;
	printf("找哪个");
	scanf("%d", &Z);
	while (nums[n] != nums[Z])
	{
		if (nums[n] < nums[Z])
		{
			n = (n+y) / 2;//如果小了加上最大数除以二   
			continue;
		}
		else if (nums[n] > nums[Z])
		{
			n = n / 2;//如果大了继续除以二
			continue;
		}
	}
	printf("找到了,");
	


	return 0;
}