#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int main()
{
	int a = 0;
	printf("����:");
	scanf("%d", &a);
	//���֧ѭ��
	if (a <= 12)
	{
		printf("Сѧ��");
	}

	else if (a < 18)
	{
		printf("������");
	}
	else if (a < 26)
	{
		printf("����");
	}
	else if (a < 40)
		printf("����");
	else if (a < 60)
		printf("׳��");
	else if (a < 100)
		printf("����");
	else
		printf("�泤��!!");
	printf("\n");

	//��ӡ1-100����
	printf("��ӡ1-100����\n");
	int b = 0;
	while (b < 100)
	{
		b++;
		if (b % 2)
		{
			printf("%d\t", b);
		}
		
	}
	return 0;

}