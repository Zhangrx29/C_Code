#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

/////���Եݹ�����,ʧ��ʧ��ʧ��
////int count(int i,int num)
////{
////	if (i < 100)
////	{
////		if (i % 10 == 9 )//��λ
////			return num+1 ;
////			if (i / 10 == 9 )//ʮλ,�ֿ�д����Ϊ���㵽99��2��9
////				return num+1;
////			else
////			{
////				count(i + 1,num);
////			}
////
////	}
////}

int count(int a, int b)//��ʼ������,����������
{
	int count = 0;//����
	for (; a < b; a++)
	{
		if (a % 10 == 9)
			count++;
		if (a / 10 == 9)
			count++;
		else
			continue;
	}
	return count;

}


int main()
{
	int a = count(1,100);
	printf("%d ", a);
	return 0;
}