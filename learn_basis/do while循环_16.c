#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//do whileѭ��
//�﷨
//do 
//		ѭ�����;
//while(���ʽ);
//��while������,while�����ж���ִ��,do while����ִ�����ж�

int main()
{
	//int a = 0;
	//do
	//{
	//	if (a % 2 == 0)
	//	{ 
	//		printf("%d\n", a);
	//		
	//	}
	//	a++;
	//} while (a <= 10);
	//do while���ص���ѭ������ִ��һ��
	printf("-------����׳�-------\n");
	
	//int num = 0;
	//scanf("%d", &num);
	//int num2=num--;
	//for (; num != 0; num--)
	//{
	//	num2 *= num;
	//}
	//printf("%d", num2);
	printf("\n------����׳˵ĺ�------\n");
	
	int a = 0;
	int b = 0;
	int c = 1;
	int d = 0;
	scanf("%d", &a);

	for (;a != 0;a--)//���μ���1
		for (b = 1,c =1; b <= a; b++)//a���μ�1
		{
				c *= b;
				if (b == a)
				{
					d += c;
					printf("%d\n", d);
				}
		}

	//��һ��������������Ҿ����ĳ������n
		//����һ����������,ʹ�ö��ֲ��Ҹ���Ч
			//�����Ȳ���һ���м���, Ȼ���м���������������Զ�,�����м����������֮����м���,��������
	int nums[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n = 10/2;//����ĳ���
	int y = sizeof(nums) / sizeof(nums[0]);//sizeof - ��С, �ܴ�С���Ե�һ��Ԫ�ش�С, ����Ԫ���ܸ���
	int Z = 0;
	printf("���ĸ�");
	scanf("%d", &Z);
	while (nums[n] != nums[Z])
	{
		if (nums[n] < nums[Z])
		{
			n = (n+y) / 2;//���С�˼�����������Զ�   
			continue;
		}
		else if (nums[n] > nums[Z])
		{
			n = n / 2;//������˼������Զ�
			continue;
		}
	}
	printf("�ҵ���,");
	


	return 0;
}