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
	//�洢���� - ��ά����
	char chess[ROW][COL];//��ߴ�ŵ����ַ�,char����,���붨��ĳ�����������޸�
	//��ʼ�� - �ո�
	Initialize(chess, ROW, COL);//���뺯��,���г�ʼ��
	//��ӡ���� - ��ӡ���������
	Print_chess(chess, ROW, COL);

	//�� 
	while (1)
	{
		//�����
		PlayerMove(chess, ROW, COL);//��ֹ����ĳ��������Ԫ�ظ���,���Լ�������Ԫ�ظ��������ж�
		Print_chess(chess, ROW, COL);//������ӡ������
		//�ж���Ӯ
		if (Winner(chess, ROW, COL) != 'C')
		{
			break;
		}

		//������
		ComputerMove(chess, ROW, COL);//������Ҳ��Ҫ֪����Χ,����������
		Print_chess(chess, ROW, COL);//������ӡ������

		if (Winner(chess, ROW, COL) != 'C')
		{
			break;
		}
	}
	//�ж���Ӯ
	if (Winner(chess, ROW, COL) == '*')
	{
		printf("���ʤ��\n");
	}
	else if (Winner(chess, ROW, COL) == '#')
	{
		printf("����ʤ��\n");
	}
	else if (Winner(chess, ROW, COL) == 'Q')
		printf("ƽ��\n");
}

int main()
{
	int num = 0;
	srand((unsigned int)time(NULL));//ǿ��ת��Ϊunsigned int����	
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &num);
		switch (num)//����ѡ�������ж��Ƿ�����
		{
		case 1:
		{
			printf("������\n");
			game();
			break;
		}
		case 0:
		{
			printf("�˳���Ϸ\n");
			break;
		}
		default:
			printf("��������,��������\n");
			break;
		}
	} while (num);//�����ж�
	return 0;
}