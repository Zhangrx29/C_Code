#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

#include <string.h>
	//strlen,strcmp�������ַ�������,���õ�ͷ�ļ�Ҳ����<string.h>
#include <windows.h>

#include <stdlib.h>

#include <time.h>

void menu()
{
	printf("********************\n");
	printf("*******1.play*******\n");
	printf("*******0.exit *******\n");
}

void game()
{
	//1.��������� ͷ�ļ� <stdlib.h>
	int x = rand()%100+1;// %100�������϶���1-99,Ȼ��+1����1-100     //rand����������0fff(32767)֮�������

////rand()ʹ��֮ǰ������srand����������, srand�ﴫ�����ΪNULL(��ָ��)��time����, Ȼ��unsigned�����ķ�������ǿ��ת��Ϊunsigned int����,unsigned in��srand��Ҫ��ֵ
	int guess = 0;
	while (1)
	{
		printf("�������\n");
		scanf("%d", &guess);
		if (guess < x)
		{
			printf("��С��\n");
		}
		else if (guess > x)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���!\n");
			break;
		}
	}

}

//��ʾ����ַ��������ƶ�,���м��ȥ
int main()
{
	char arr1[] = "welcome to bit !!!!!";//��ʾ�ַ�
	char arr2[] = "###################";//�ڵ�
	int left = 0;//�����һ��Ԫ��

	int right = strlen(arr1);//������ȼ�һ�������һ���ַ����±� - strlen��Ҫ����ͷ�ļ�
	while (left<=right)
	{
		arr2[left] = arr1[left];//arr2��leftλ�õ��ַ�����arr1��leftλ�õ��ַ�
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(800);//˯��1000���� - 1�� - ����ͷ�ļ�
		system("cls");//�����Ļ
		left++;
		right--;
	}
	
//	//�����ַ����Ƚϲ���ʹ��==,Ӧ��ʹ�ú���strcmp() -������ͷ�ļ�
//	char password[] = { 0 };
//	int count = 3;
////��½ϵͳ
//	for (; count != 0; )
//	{
//		printf("����������\n");
//		scanf("%s", &password);
//
//		if (strcmp(password, "12456") == 0)//�жϵ��ڽ��Ϊ0  С�ڽ��Ϊ <0  ���ڽ��Ϊ >0
//		{
//			printf("��½�ɹ�");
//			break;
//		}
//		else
//		{
//			count--;
//			if (count != 0)
//			{ 
//				printf("�������,����������\n");
//				printf("������%d�λ���\n", count);
//			}
//			if (count == 0)
//				printf("���Ĵ���������");
//		}
//	}


	//������
	int nums = 0;
	
	srand((unsigned int)time(NULL));// srand - rand������������ - ��ֹ��һ�����ֵ�͵ڶ����ظ�   ����һ��һֱ�����仯��ֵ - ʱ���time()   
		//NULL - ��ֵ
		//unsigned ǿ������ת��Ϊint
		//����������ҪƵ������, �����ŵ�game������

	
	do
	{
		menu();//���� - ��ӡ�˵� - �ڵڰ��ж�����
		printf("��ѡ��(1/0)?:");
		scanf("%d", &nums);


		switch (nums)
		{
		case 1:
		{
			printf("������\n");	

			game();//�����ֹ��� - ��ʮ����
			break;//��������switch���
		}
		case 0:
		{
			printf("�˳���Ϸ\n");
			break;
		}
		default :
			printf("�˳���Ϸ\n");
			break;
		}

	} while (nums);//����һ��,Ȼ���ж�Ҫ��Ҫ���� 
	printf("\n�ټ���");
		return 0;
}