#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int mystrlen(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}
void inverse_str(char* str)
{
	char tmp = *str;//临时变量 ->a	1
	int len = mystrlen(str);//长度	1
	*str = *(str + len - 1);//下标		2
	*(str + len - 1) = '\0';//将从前边拿下来的字符换成结束标志,方便执行		3
	if (mystrlen(str+1)>=2)//2个字符以上才逆序
	{
		inverse_str(str + 1);//继续逆序中间的,+1逆序下一个		4	
	}
	*(str + len - 1) = tmp;//将从前边拿下来的字符再换上去	5
}
int main()
{
	char arr[] = "abcdef";
	inverse_str(arr);
	printf("%s\n", arr);
	return 0;
}