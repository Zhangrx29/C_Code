#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf


//�ж�һǧ-��ǧ�������
int main()
{
	int i;
	int count = 0;
	for (i = 1000; i <= 2000; i+=4)
	{
		if ((i % 100 != 0) || (i % 400 == 0))//�ܱ�4�������Ҳ��ܱ�100���� �� �ܱ��İ�����
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d",count);

	return 0;
}