#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//��ӡһ��һ��
int main()
{
	//���Դ���һ������,���α������
	int arr[100] = { 0 };
	int n;
	for (n = 0; n < 100; n++)
	{
		arr[n] = n + 1;//�������
		if (arr[n] % 3 == 0)
			printf("%d, ", arr[n]);
	}

	//����һ������
	printf("\n����һ���취\n");
	int i;
	for (i = 3; i < 100; i += 3)
		printf("%d ",i);
	

	return 0;
}