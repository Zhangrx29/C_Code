#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//switch�������ڶ��֧
//�﷨
	//switch (���α��ʽ)//���α��ʽ������ֵ��ƥ����������������ִ��
	//{
	//		�����;
	//}
//������﷨
	//case ���γ������ʽ:
		//����;


int main()
{
	int num = 0;
	scanf("%d", &num);
	switch (num)//���α��ʽ
		//�ַ�Ҳ����,��Ϊ�ַ�ʹ��ASCII��ֵ�洢��
	{
	case 1+1-1://���γ������ʽ
		printf("����������һ");
		break;//�������break,����һֱ����ִ��
	case 2:
		printf("���������ڶ�");
		break;
	case 3:
		printf("������������");
		break;
	case 4:
		printf("������������");
		break;
	case 5:
		printf("������������");
		break;
	case 6:
		printf("������������");
		break;
	case 7 :
		printf("������������");
		break;
	printf("\n--------------------------\n");

	}

	//����ĳ�����1-5���Ϊ������,6-7Ϊ��Ϣ��
	switch (num)
	{
	printf("--");//����ִ��,�����num��ֱ����ת����Ӧ�������
	case 1 :
	case 2 :
	case 3 :
	case 4 :
	case 5 ://ǰ�ߵ�û��break,��������Ļ����������ִ�е�����������break
		printf(" --������");
		break;
	case 6 :
	case 7 :
		printf(" --��Ϣ��");
		break;

	default://���ж�û��ƥ�䵽�Ļ�����default(Ĭ��)
		printf("�������");
		break;
		

	}


	return 0;
}