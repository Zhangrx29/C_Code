#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//����

int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	
	int num_1 = 0;
	int num_2 = 0;
	scanf("%d,%d", &num_1, &num_2);

	//���Ǻ����ķ�ʽ���
	//int add = num_1 + num_2;
	//printf("%d", add);
	
	
	//�����ķ�ʽ
	int num = Add(num_1, num_2);//��sum_1��sum_2ִ��Add���� - Add������Ҫ����-��6��

	printf("%d", num);


	//���� - һ����ͬ���͵�Ԫ�صļ���
	//����
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//����arr��10��Ԫ��,�ֱ�����ֵ1,2,3,4,5......
	char ch[5] = { 'a','b','c' };//��ֵԪ�ظ���������ֵ��ָ������ʱ,��ֵʣ�µ�Ԫ��Ϊ0
	//���� - ͨ���±����
	int i = 0;
	printf("%c\n", ch[0]);//����ch�����0��λ�õ�Ԫ��

	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}

	return 0;
}
