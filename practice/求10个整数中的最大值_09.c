#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int main()
{
	int arr[10] = { -2,-5,-8,-3,-4,-8,-5,-4,-5,-6 };
	int i;
	//int num = 0;//����д���ȫ��С��0���Ǿ��㲻���������
	int num = arr[0];//���������е�Ԫ��������һ��Ԫ�ؼ���Ϊ���
	for (i = 1; i < 10; i++)//Ȼ��ӵ�2��Ԫ�ؿ�ʼ����,����������Ԫ��-1(�±��0��ʼ)
	{
		if (arr[i] > num)
			num = arr[i];
	}
	printf("%d", num);
	return 0;
}