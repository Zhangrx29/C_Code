#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf
#include "game.h"

void menu()
{
	printf("**************************************\n");
	printf("*************  1.play ****************\n");
	printf("*************  0.exit  ***************\n");
	printf("**************************************\n");
}

void game()
{
	//存储棋盘 - 二维数组
	char chess[ROW][COL];//里边存放的是字符,char类型,填入定义的常量方便后期修改
	//初始化 - 空格
	Initialize(chess, ROW, COL);//传入函数,进行初始化
	//打印棋盘 - 打印数组的内容
	Print_chess(chess, ROW, COL);

	//玩 
	while (1)
	{
		//玩家玩
		PlayerMove(chess, ROW, COL);//防止输入的超过数组的元素个数,所以加上素组元素个数进行判断
		Print_chess(chess, ROW, COL);//下完后打印下棋盘
		//判断输赢
		if (Winner(chess, ROW, COL) != 'C')
		{
			break;
		}

		//电脑玩
		ComputerMove(chess, ROW, COL);//电脑走也需要知道范围,传入行列数
		Print_chess(chess, ROW, COL);//下完后打印下棋盘

		if (Winner(chess, ROW, COL) != 'C')
		{
			break;
		}
	}
	//判断输赢
	if (Winner(chess, ROW, COL) == '*')
	{
		printf("玩家胜利\n");
	}
	else if (Winner(chess, ROW, COL) == '#')
	{
		printf("电脑胜利\n");
	}
	else if (Winner(chess, ROW, COL) == 'Q')
		printf("平局\n");
}

int main()
{
	int num = 0;
	srand((unsigned int)time(NULL));//强制转换为unsigned int类型	
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &num);
		switch (num)//根据选择做出判断是否游玩
		{
		case 1:
		{
			printf("三子棋\n");
			game();
			break;
		}
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		default:
			printf("输入有误,重新输入\n");
			break;
		}
	} while (num);//条件判断
	return 0;
}