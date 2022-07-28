#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

#include <string.h>
	//strlen,strcmp都属于字符串函数,引用的头文件也都是<string.h>
#include <windows.h>

#include <stdlib.h>

#include <time.h>

void menu()
{
	printf("********************\n");
	printf("*******1.play*******\n");
	printf("*******0.exit *******\n");
}

void game()
{
	//1.生成随机数 头文件 <stdlib.h>
	int x = rand()%100+1;// %100的余数肯定是1-99,然后+1就是1-100     //rand函数返回了0fff(32767)之间的数字

////rand()使用之前调用了srand生成器函数, srand里传入参数为NULL(空指针)的time函数, 然后unsigned把他的返回类型强制转换为unsigned int类型,unsigned in是srand需要的值
	int guess = 0;
	while (1)
	{
		printf("请猜数字\n");
		scanf("%d", &guess);
		if (guess < x)
		{
			printf("猜小了\n");
		}
		else if (guess > x)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了!\n");
			break;
		}
	}

}

//演示多个字符从两边移动,向中间汇去
int main()
{
	char arr1[] = "welcome to bit !!!!!";//演示字符
	char arr2[] = "###################";//遮挡
	int left = 0;//数组第一个元素

	int right = strlen(arr1);//求出长度减一就是最后一个字符的下标 - strlen需要引用头文件
	while (left<=right)
	{
		arr2[left] = arr1[left];//arr2的left位置的字符等于arr1的left位置的字符
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(800);//睡眠1000毫秒 - 1秒 - 引用头文件
		system("cls");//清空屏幕
		left++;
		right--;
	}
	
//	//两个字符串比较不能使用==,应该使用函数strcmp() -需引用头文件
//	char password[] = { 0 };
//	int count = 3;
////登陆系统
//	for (; count != 0; )
//	{
//		printf("请输入密码\n");
//		scanf("%s", &password);
//
//		if (strcmp(password, "12456") == 0)//判断等于结果为0  小于结果为 <0  大于结果为 >0
//		{
//			printf("登陆成功");
//			break;
//		}
//		else
//		{
//			count--;
//			if (count != 0)
//			{ 
//				printf("输入错误,请重新输入\n");
//				printf("您还有%d次机会\n", count);
//			}
//			if (count == 0)
//				printf("您的次数已用完");
//		}
//	}


	//猜数字
	int nums = 0;
	
	srand((unsigned int)time(NULL));// srand - rand函数的生成器 - 防止第一轮随机值和第二轮重复   传进一个一直发生变化的值 - 时间戳time()   
		//NULL - 空值
		//unsigned 强制类型转换为int
		//生成器不需要频繁生成, 把他放到game函数外

	
	do
	{
		menu();//函数 - 打印菜单 - 在第八行定义了
		printf("请选择(1/0)?:");
		scanf("%d", &nums);


		switch (nums)
		{
		case 1:
		{
			printf("猜数字\n");	

			game();//猜数字过程 - 第十五行
			break;//跳出的是switch语句
		}
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		default :
			printf("退出游戏\n");
			break;
		}

	} while (nums);//先玩一局,然后判断要不要继续 
	printf("\n再见捏");
		return 0;
}