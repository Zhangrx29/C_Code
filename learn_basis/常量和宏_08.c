#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf


//define��һ��Ԥ�������
//	01.���峣��
	#define Max 1000//����һ��Max����Ϊ1000
// 02.�����
#define Add(x,y) x+y	//��һЩë�� ->15��
//����15���޸ĺ�
#define new_Add(x,y) ((x)+(y))//�����ܲ��Ǹ�����,�Ǹ����ʽ,���԰�x,y������,�ٰ�����ĺ���������


int main()
{
	printf("%d\n", Add(5, 5));//10
	printf("%d\n", 4 * Add(2, 5));//13
		//Ϊʲô�������28 - define��������滻��, 4*Add(2,5)�����4*2+5

	//��11�ж�����޸ĺ�
	printf("%d\n", 3 * new_Add(2 , 5));//21

	return 0;
}