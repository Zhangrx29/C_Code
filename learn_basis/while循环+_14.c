#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int main()
{
	//getchar()��;
	char password[20] = { 0 };
	printf("��������������");
	scanf("%s", password);//���鲻��ȡ��ַ,������������Ǹ���ַ
		//��ʱ������֮�󻺳�������\n,ִ�е�getchar���Զ�����,Ȼ����ch=\n
			//���:  �����������������
//	getchar();	//�ѻ�������������
		//��������ʱ���ÿո�ֿ���,���»��������ж���ַ�,����ʹ��whileѭ����������������ݡ�
			int tem = 0;
			while ((tem = getchar()) != '\n')//һֱ��ȡ�ַ����Ҹ���tem,����ȡ��\nֹͣ
			{
				;
			}
			
	
	printf("��ȷ����������(Y/N):\n");
	int ch = getchar();//�ѻ�ȡ���ַ��浽ch�� - ��ȡ�Ļ������������ \n(�س�)Ҳ���ַ� - �����P32��Ƶ
		//��ȡ�����ַ�Ϊʲô��int�洢 - ��ASCII��ֵ�洢(����)
	if (ch == 'Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("ȷ��ʧ��\n");
	
	
	return 0;
}