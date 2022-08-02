#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

#include "game.h"

//��ʼ��
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

//��ӡ����
void Print_chess(char chess[ROW][COL], int row, int col)
{
	int j;
	int i;
//��ӡ��һ�е�   |   |   
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", chess[i][j]);
			if (j<col-1)
				printf("|");
		}
		printf("\n");

//��ӡ�ڶ��е�---|---|---
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

//�������
void PlayerMove(char chess[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����\n");
	//��Ҳ��ǳ���Ա,�����±궼�Ǵ�1��ʼ�� - �ж�����Ϸ���
	while (1)
	{
		printf("��������������:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�ж��µ���λ���Ƿ��¹�
			if (chess[x - 1][y - 1] == ' ')//������������Ǵ�1��ʼ,���ǳ�����±��Ǵ�0��ʼ,����-1
			{
				chess[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("��λ�ñ�ռ��,����������\n");
		}
		else
			printf("�������������,����������\n");
	}
	
}

//��������
void ComputerMove(char chess[ROW][COL], int row, int col)
{
	printf("������\n");
	//�ж��µ���λ���Ƿ��¹�
	while (1)
	{
		int x = rand() % row;//�������Χ ȡ��,����϶�С��row - ����0-2
		int y = rand() % col;//����������������,����������һ�ξ���,���Կ��Էŵ�main������
		if (chess[x][y] == ' ')
		{
			chess[x][y] = '#';
			break;
		}
	}
}

//�ж���Ӯ - ƽ��
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

//�ж���Ӯ
char Winner(char chess[ROW][COL], int row, int col)
{
	int i = 0;

	for (i = 0; i < row; i++)
	{
		//���� ���or����ʤ��
		if (chess[i][0] != ' ' && chess[i][0] == chess[i][1] && chess[i][1] == chess[i][2])
			return chess[i][0];

		//���� ���or����ʤ��

		if (chess[0][i] != ' ' && chess[0][i] == chess[1][i] && chess[1][i] == chess[2][i])
			return chess[0][i];
	}
	//�Խ��� ���or����ʤ��
	if (chess[0][0] != ' ' && (chess[0][0] == chess[1][1] && chess[1][1]  == chess[2][2]))
		return chess[0][0];
	if (chess[0][2] != ' ' && chess[0][2] == chess[1][1] && chess[1][1] == chess[2][0])
		return chess[0][0];
	//ƽ��
	
	if (1 == Draw(chess, row, col))
		return 'Q';

	return 'C';


}