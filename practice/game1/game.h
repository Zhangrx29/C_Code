#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//srand
#include <time.h>//time
#define ROW 3//�� - ����
#define COL 3//�� - ����

//��ʼ��
void Initialize(char chess[ROW][COL], int row, int col);

//��ӡ����
void Print_chess(char chess[ROW][COL], int row, int col);

//�������
void PlayerMove(char chess[][COL], int row, int col);

//��������
void ComputerMove(char chess[ROW][COL], int row, int col);

//�ж�ʤ��
char Winner(char chess[ROW][COL], int row, int col);