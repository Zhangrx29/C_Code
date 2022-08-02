#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//srand
#include <time.h>//time
#define ROW 3//行 - 常量
#define COL 3//列 - 常量

//初始化
void Initialize(char chess[ROW][COL], int row, int col);

//打印棋盘
void Print_chess(char chess[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char chess[][COL], int row, int col);

//电脑下棋
void ComputerMove(char chess[ROW][COL], int row, int col);

//判断胜利
char Winner(char chess[ROW][COL], int row, int col);