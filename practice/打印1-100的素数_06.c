#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//�ж����� - ���� - ֻ�ܱ�1������������

int main()
{
	//�ж�i�Ƿ�Ϊ����
	int i;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;//��forѭ����,break������ǰѭ��
			}
		}
		if (i == j)
		{
			printf("%d ", i);
		}

		
	}

	return 0;
}