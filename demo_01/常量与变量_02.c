#define _CRT_SECURE_NO_WARNINGS 1//ʹ������scanf   //����Ҫ�ŵ�Դ�ļ��ĵ�һ��
#include <stdio.h>//ʹ�����printf

//int main()
//{
//	int age = 16;
//	double weight = 105.5;
//
//	//���� �޸�
//	age = age + 1;
//	weight = weight - 5;
//
//	printf("%d\n",age);
//	printf("%lf\n", weight);
//
//	return 0;
//}

//%d - ����
//%f - float
//%lf - double


//�ֲ�������ȫ�ֱ���

//ȫ�ֱ��� - {}�ⲿ����ı��� 

int year = 2022;

//�ֲ�����

//int main()
//{
//	// �ֲ����� - {}�ڲ�����ı���
//	//���ֲ�������ȫ�ֱ�����ͻʱ,�ֲ�����
//	//������ȫ�ֱ����;ֲ���������һ��
//	printf("%d\n", year);
//	int year = 2021;
//	printf("%d\n", year);
//	return 0;
//}


//����2���������
//scanf - ���뺯��

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//������������,��˳��ŵ�a��b��//�����ʽΪ%d+�ո�+%d
//	int add = a + b;
//	printf("%d\n", add);
//
//	return 0;
//}


//���������������

//�ֲ�������������:�������ڵľֲ���Χ
//ȫ�ֱ�����������:��������(����һ��Դ�ļ�ʱ������--78��)
int age = 16;//ȫ�ֱ���

//int main()
//{
//	printf("666\n");
//	printf("age=%d\n", age);
//	{
//		int num = 555;//�ֲ�����
//		printf("num=%d\n", num);
//		//num����������������ŵ�С������
//	}
//	return 0;
//}

//ȫ�ֱ��� - ����ͬһԴ�ļ�ʱ,��Ҫ����
extern int Zhangrx_age;//��������int Zhangrx_age

//int main()
//{
//	printf("Zhangrx_age=%d", Zhangrx_age);
//	return 0;
//}
//��������
//��������������:�����Ĵ��������ٵ�ʱ���
//
//�ֲ���������������:����ֲ���Χ->���ֲ���Χ


//����

#define  velue 1000//����һ������velue��ֵΪ1000



//int main()
//{
//	//01.���泣��
//	3.14;
//	5;
//	'a';
//	"abcde";
//
//	// 02.const���εĳ�����(���������ʻ��Ǳ���,ֻ���������˳�����)
//	const int num = 50;//���峣����
//	//num = 40;//�������޸�
//	printf("num=%d\n", num);//50
//
//	//������
//	int arr[10] = { 0 };//�������10��Ԫ��
//	const x= 8;//���峣����
//	//int arr_2[x] = { 0 };//x��λ�ñ����ǳ���,Ϊʲô�ù�const���ǲ���?��Ϊconst�Ƕ���ĳ�����,���ǳ���
//	
//
//	//03. #define����ı�ʶ������
//	//��Ҫ��ǰ����--93��
//	int y = velue;//y=1000
//
//}

//04.ö�ٳ���
enum Sex
{
	//ö�ٳ������ܻ�ȡ��ֵ
	MALE=5,//����ֵ
	FEMALE,
};

int main()
{
	//04.ö�ٳ���enum - ����һһ�оٵĳ���--123��
	enum Sex z = MALE;//ö�ٱ���z����ȡֵ�Ľ��ΪMALE
	printf("%d\n", z);
	int arr_2[MALE] = { 0 };
	return 0;
}