#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int main()
{
//ָ������� - ����������Ԫ�ص�ַ
	int arr[5] = { 1,2,3,4,5 };
	int* p = arr;
	//	a[b]	�������ڼ��������ʱ��ת��Ϊ *( a + b ), ���ݼӷ�������,���Է�����д 
	printf("%d\n", 3[arr]);//	����arr����ĵ������±�
	printf("%d\n", p[4]);//		* ( p + 4 )
	//	arr[2] == *(arr+2) == *(2+arr) == *(p +2) == *(2+p) == 2[arr]


//����ָ��
	int a = 10;
	int* pa = &a;//pa��ָ�����, һ��ָ�� , ��ֻ��һ��ָ���ϵ,ָ����a

	int** ppa = &pa;
	printf("%d\n", **ppa);//	**ppa == *pa = a	*ppa = pa


//ָ������ - ���ָ�������
	int* parr[5];//ÿ��Ԫ�ض����������ָ�� - ����ָ������
	char arr[5];//�ַ�����


	return 0;
}