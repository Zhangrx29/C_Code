#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int main()
{
	int a = 0;

	//break
	while (a<=10)
	{
		if (a == 5)
			if (1)
				break;//���Ϊ1 2 3 4 5 - ��whileѭ����,break��������ֹͣѭ��
		a++;
		printf("%d ", a);
	}

	printf("\n---------------------------\n");

	int b = 0;

	//continue
	//while (b <= 10)
	//{
	//	if (b == 5)
	//		continue;//���Ϊ1 2 3 4 5 Ȼ����ѭ�� - ��whileѭ����,continue���ڽ�������ѭ��,Ȼ���ж���һ��ѭ���Ƿ�ִ��
	//	b++;
	//	printf("%d \n", b);
	//}

	//
	int ch = 0;//
	while ((ch = getchar()) != EOF)//ch=getchar() ��ȡ(��������)һ���ַ��ŵ�ch��		���getchar��ȡ�����ַ��ŵ�ch���,������EOF(û��������)
	{	//��ȡ���� Ctrl+zʱ,getchar��ȡ����EOF
		//getchar() - ��ȡһ���ַ�,��һ��stream��,�����Ǵӱ�׼����(��������) - ��ȡ�����ַ�,����\n(�س�)
			//���ص���һ���������ַ�(ASCII��ֵ)
			//����ڶ�ȡ������һ����������ļ�����,������������ص���EOF
				//Ҳ������ȷ��ȡ�Ļ�,���ص��Ƕ������ַ���ASCII��ֵ����ȡʧ�ܷ��ص���EOF(-1)
				//EOF - end of file - �ļ�������־
			//getchar��ȡ�ַ��ķ���Ҳ���� - getchar(������) 
	
		putchar(ch);//getchar��ȡ�ַ�,putchar��ӡ�ַ���

	}

		
	return 0;
}