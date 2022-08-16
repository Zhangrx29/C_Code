#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

void init(int arr[], int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[], int sz)
{
	int least = 0;
	int max = sz - 1;

	while (least < max)
	{
		int tem = arr[least];
		arr[least] = arr[max];
		arr[max] = tem;
		least++;
		max--;
	}
}

int main()
{
	//	1.ʵ�ֺ���init() - ��ʼ������ȫΪ0
	//	2.ʵ��print() - ��ӡ�����ÿ��Ԫ��
	//	3.ʵ��reverse() - �������Ԫ�ص�����

	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);//����Ԫ�ظ���

	reverse(arr1, sz);
	print(arr1, sz);
	init(arr1, sz);
	print(arr1, sz);


	//������A�����ݺ�����B�����ݽ��н���(����һ����)
	int A[] = { 1,2,3,4,5 };
	int B[] = { 6,7,8,9,10 };
	int i ;
	sz = sizeof(A) / sizeof(A[0]);
	for (i = 0; i < sz; i++) 
	{
		int tem = A[i];
		A[i] = B[i];
		B[i] = tem;
	}
	print(A, sz);
	print(B, sz);

	return 0;
}