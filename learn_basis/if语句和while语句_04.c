#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int main()
{
	//ѡ����� if else
	char input = 0;
	printf("You like me?");
	printf("\n(yes or no)?\n");
	scanf("%s", &input);
	if (input == "yes")
	{
		printf("ohhhhhhhhh!!!!!!!\nThanks,me to ^_^");
	}
	else
	{
		printf("ohhhh!!Nooooooooo!!!!!!!!!!!");
	}

	//ѭ����� while
	int year = 1980;
	while (year < 2022)
	{ 
		printf("\nʱ�����һ��...\n������%d��",year);
		year++;
	}
	if (year == 2022)
	{
		printf("\nhahahaa!!!!,��%d������޿�ʼ�Ӵ���̵�һ����!!!!!!!!!", year);
	}

	return 0;
}
