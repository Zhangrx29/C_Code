#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

#include "game.h"

//初始化
void Initialize(char chess[ROW][COL], int row, int col)
{
	int i;
	int j;
	for (i=0;i<row;i++)
		for (j = 0; j < col; j++)
		{
			chess[i][j] = ' ';
		}
}

//打印棋盘
void Print_chess(char chess[ROW][COL], int row, int col)
{
	int j;
	int i;
//打印第一行的   |   |   
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", chess[i][j]);
			if (j<col-1)
				printf("|");
		}
		printf("\n");

//打印第二行的---|---|---
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");


		}
	}
}

//玩家下棋
void PlayerMove(char chess[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走\n");
	//玩家不是程序员,理解的下标都是从1开始的 - 判断坐标合法性
	while (1)
	{
		printf("请输入坐标下棋:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断下的棋位置是否被下过
			if (chess[x - 1][y - 1] == ' ')//玩家输入坐标是从1开始,但是程序的下标是从0开始,所以-1
			{
				chess[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("该位置被占用,请重新输入\n");
		}
		else
			printf("输入的坐标有误,请重新输入\n");
	}
	
}

//电脑下棋
void ComputerMove(char chess[ROW][COL], int row, int col)
{
	printf("电脑走\n");
	//判断下的棋位置是否被下过
	while (1)
	{
		int x = rand() % row;//随机数范围 取余,结果肯定小于row - 生成0-2
		int y = rand() % col;//随机数最好用生成器,生成器生成一次就行,所以可以放到main函数里
		if (chess[x][y] == ' ')
		{
			chess[x][y] = '#';
			break;
		}
	}
}

//判断输赢 - 平局
int Draw(char chess[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (chess[i][j] == ' ')
			{
				return 0;
			}
		}
	}
		
	return 1;
}

//判断输赢
char Winner(char chess[ROW][COL], int row, int col)
{
	int i = 0;

	for (i = 0; i < row; i++)
	{
		//单行 玩家or电脑胜利
		if (chess[i][0] != ' ' && chess[i][0] == chess[i][1] && chess[i][1] == chess[i][2])
			return chess[i][0];

		//单列 玩家or电脑胜利

		if (chess[0][i] != ' ' && chess[0][i] == chess[1][i] && chess[1][i] == chess[2][i])
			return chess[0][i];
	}
	//对角线 玩家or电脑胜利
	if (chess[0][0] != ' ' && (chess[0][0] == chess[1][1] && chess[1][1]  == chess[2][2]))
		return chess[0][0];
	if (chess[0][2] != ' ' && chess[0][2] == chess[1][1] && chess[1][1] == chess[2][0])
		return chess[0][0];
	//平局
	
	if (1 == Draw(chess, row, col))
		return 'Q';

	return 'C';


}