//printf - �⺯�� - ��ӡ
//printf ��ʹ��,Ҳ�ô��к�(����ͷ�ļ� stdio.h)


#include <stdio.h>//����һ��ͷ�ļ�stdio.h

//int main()
//{
//	printf("Hello C");
//
//	return 0;
//}

//����+����+����
// �˵�->����->��ʼִ��(������)    ��ݼ�ctrl+F5

//һ�������п����ж��  .c�ļ�
//���  .c�ļ���ֻ����һ��main()����



//�������� (����,������


//int main()
//{
//	//�ַ��������� char
//	char name = 'С��';
//	//���� int
//	int age = 20;
//	//������ short
//	short num = 10;
//	//������ long
//	//�������� long long
//	//��������/�����ȸ����� float
//	float weight = 55.5;
//	//˫���ȸ����� double
//	double year=18.5;
//
//	return 0;
//}



//ÿ�����ʹ�С�Ƕ���?

int main()
{
	printf("heheh\n");
	printf("������\n");
	printf("%d\n", 99);//��ӡһ������ - %d

	//sizeof - �ؼ��� - ������ - �������ͻ��߱�����ռ�ռ��С

	printf("char:%d\n", sizeof(char));//1
	printf("short:%d\n", sizeof(short));//2
	printf("int:%d\n", sizeof(int));//4
	printf("long:%d\n", sizeof(long));//4
	printf("float:%d\n", sizeof(float));//4
	printf("long long:%d\n", sizeof(long long));//8
	printf("double:%d\n", sizeof(double));//8	
	return 0;
}