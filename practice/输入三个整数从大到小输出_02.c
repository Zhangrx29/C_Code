#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//int func(int a)
//{
//	int b;
//	switch (a)
//		case 1:b = 1;  //���Դ���
//
//	return b;
//}


int main()
{
	//printf("%d", func(2)); //���Դ���

	//����������������Ӵ�С���
		//������ - �������������
	int a = 0;//��������
	int b = 0;
	int  c = 0;
	//����
	scanf("%d %d %d", &a,&b,&c);
	//����
	if (a < b)//���num2С��num3�ͻ���λ��
	{
		int temp = a;
		a = b;
		b = temp;
	}

	if (a < c)
	{
		int temp = a;
		a = c;
		c = temp;
	}

	if (b < c)
	{
		int temp = b;
		c = b;
		b = temp;
	}

	//���
	printf("%d %d %d", a, b, c);

	return 0;
}