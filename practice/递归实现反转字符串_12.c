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
	char tmp = *str;//��ʱ���� ->a	1
	int len = mystrlen(str);//����	1
	*str = *(str + len - 1);//�±�		2
	*(str + len - 1) = '\0';//����ǰ�����������ַ����ɽ�����־,����ִ��		3
	if (mystrlen(str+1)>=2)//2���ַ����ϲ�����
	{
		inverse_str(str + 1);//���������м��,+1������һ��		4	
	}
	*(str + len - 1) = tmp;//����ǰ�����������ַ��ٻ���ȥ	5
}
int main()
{
	char arr[] = "abcdef";
	inverse_str(arr);
	printf("%s\n", arr);
	return 0;
}