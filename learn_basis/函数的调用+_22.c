#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//ÿ����һ�κ���,num��+1
void Add(int* pa)//��������ǵ�ַ,��ô������ָ�����
{
	(*pa)++;
}

//01.������������Ķ��ֲ���
//int search(int a[], int b, int c)
//{
//	int left = 0;//����ĵ�һ���±�
//	int right = c - 1;//Ԫ�صĸ���-1 == �±���ܳ���
//	int mid = (left + right) / 2;//�м�Ԫ���±�
//	int i;
//	for (i = 0; i <= right;i++)
//	{ 
//		if (a[mid] == b)
//			return a[mid];
//		else if (a[mid]>b)//�Ҵ���
//		{
//			mid--;//��һ,��ʾ�ݴ���
//			mid /= 2;
//		}
//		else if (a[mid]<b)//��С��
//		{
//			mid += right + 1;
//			mid /= 2;
//		}
//	}
//	return -1;//û�ҵ�
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 11;
//	int x = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ��� -- �����ں����ڲ��� ��Ϊ ��
//	printf("%d",search(arr, key, x));//��arr�����xԪ������key  -- ��������,ʵ���ϴ��ݵĲ��������鱾��,���ǰѵ�һ��Ԫ�ص�ַ����ȥ(ָ��),�����󲻳�Ԫ�ظ���
//
// //ÿ����һ�κ���,num��+1 -- ��4�ж���ĺ���
// 	int num = 0;
//Add(&num);//Ҫ�ú����޸��ⲿ�ı���,��Ҫ����ַ��������
//printf("%d\n", num);//1
//
//Add(&num);
//printf("%d\n", num);//2
//
//Add(&num);
//printf("%d\n", num);//3
// 
//	return 0;
//}