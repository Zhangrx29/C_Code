#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int my_strlen(char* str)//���鴫�������ǵ�һ��Ԫ�صĵ�ַ(ָ��)���Խ��յ�ҲҪ��ָ�����
{
	if (*str != '\0')//���	*str��������ָ��ĵ�ַ
		return 1 + my_strlen(str + 1);//1+1+1+1+0		//���str+1����һ���ַ��ĵ�ַ		//ָ��Ĭ��ָ��������λ, +1����ָ����һλԪ��
			//�ݹ�����ò���++
	else
		return 0;//�����\0�ǳ���Ҳ����0��,����return 0

}
////����ݹ�ʵ�ֵĻ�Ч�ʱȽϵ�
//int Fib(int a)
//{
//	if (a < 3)
//		return 1;
//	else
//		return Fib(a - 1) + Fib(a - 2);
//
//}

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)//���ĸ���ʼfib����������
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;//���С��3�Ǿͷ���1,��Ϊfibǰ2������1
}

int main()
 {
//��ϰ - ���ܴ�����ʱ����,ģ��ʵ��һ��strlen���� - ��4��
	char arr[] = "abcd";
	printf("%d\n", my_strlen(arr));

//��һЩ���ܿ���ʹ�õ���(ѭ��)��ʵ��,Ҳ�����õݹ�ʵ��
	//���n��쳲�������
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", Fib(num));
	return 0;
}