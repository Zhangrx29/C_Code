#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf
#include <string.h>
//������Ƕ�׵��ú���ʽ���� --- ���庯��ʱ����Ƕ�׶���, ���ǿ���Ƕ�׵���

//Ƕ�׵���
void test2()
{
	printf("hhh\n");
}
int test1()
{
	test2();

}
int main()
{
//Ƕ�׵���
	test1();//��������ʱǶ�� - ��11��

//��ʽ����
	//������ʽ����ʱ
	int len = strlen("abcde");
	printf("%d\n", len);
	//ʹ����ʽ����
	printf("%d\n", strlen("abc"));

	char arr1[20] = { 0 };
	char arr2[] = "abcd";
	printf("%s\n", strcpy(arr1, arr2));
	
	printf("%d", printf("%d", printf("%d", 43)));//printf�������ص��Ǵ�ӡ����Ļ�ϵ��ַ��ĸ���,�ȴ�ӡ43,Ȼ�󷵻�2���ַ�,Ȼ���ӡ2,�ٷ���һ���ַ�,Ȼ���ӡ1

	//�����������붨��


	return 0;
}