#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//�������������Լ��
int main()
{
	//int num1 = 0;
	//int num2 = 0;
	//scanf("%d %d", &num1, &num2);
	////�������ҳ���С��һ������,�������¼�,������ͬʱ�����������������ǵ����Լ��
	//int max = 0;
	//if (num1 > num2)
	//	max = num2;
	//else
	//	max = num1;//�ҳ���С��һ������

	//while (1)//���εݼ�,ֱ������ͬʱ����2����
	//{
	//	if (num1 % max == 0 && num2 % max == 0)
	//	{ 
	//		printf("���Լ����%d\n", max);
	//		break;
	//	}
	//	max--;
	//}

	//����һ�ַ���	 -	շת�����
	//�����aȡ��С����b�Ľ��c��Ϊ0ʱ,b��ȡ��c�õ�һ���µ�c,��������,ֱ�����Ϊ0
	int a = 0;
	int b = 0;
	int c = 1;
	scanf("%d %d", &a, &b);
	if (a < b)//���������ֵ��a,�������
	{
		int tem = a;
		a = b;
		b = tem;
	}

	while (1)
	{
		if (c != 0)
		{
			c = a % b;//������ //���c=0,˵��b���ǽ��
			if (c != 0)
			{
				a = b;
				b = c;
			}
		}
		
		if (c == 0)
		{
			printf("���Լ��Ϊ%d", b);
			break;
		}

	}

	return 0;
}