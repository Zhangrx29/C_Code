#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int main()
{
	//选择语句 if else
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

	//循环语句 while
	int year = 1980;
	while (year < 2022)
	{ 
		printf("\n时间过了一年...\n今年是%d年",year);
		year++;
	}
	if (year == 2022)
	{
		printf("\nhahahaa!!!!,这%d年就是朕开始接触编程的一年呐!!!!!!!!!", year);
	}

	return 0;
}
