#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf
#include <string.h>
#include <stdlib.h>

//goto���
	//C�������ṩ�˿����������õ�goto���ͱ����ת�ı��
	//���ٻ���,�����ܻ��ô������

int main()
{
	//flag:
	//	printf("hehe");
	//	printf("hehe");

	//	goto flag;//��ת��flag - ������ѭ��

//��Щ�ط����õ�
//�ػ������
	//shutdown -s -t 60 ���ùػ�
	//shutdown -a ȡ���ػ�
	//system()���� - ִ��ϵͳ����
	system("shutdown -s -t 60");//��Ҫ����ͷ�ļ� - stdlib.h
	
	char input[] = { 0 };
 
again:
		printf("ע��:��ĵ��Խ���һ�����ڹػ�,�������:\"�ְ�\"��ȡ���ػ�\n");
		scanf("%s", input);
		if (strcmp(input, "�ְ�")==0)//��Ҫ����ͷ�ļ� - string.h
		{
			system("shutdown -a");
		}
		else
		{
			printf("��������,��а�(^_^)\n");
			goto again;
		}

	//ĳЩ����goto�����õ��ŵ�,������÷�������ֹ������ĳЩ���Ƕ�׵Ľṹ�Ĵ������,����һ�������������ѭ��
		//ֻ���ڱ�������Χ����,���ɿ纯��
		

	return 0;
}