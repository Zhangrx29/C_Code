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
				break;//结果为1 2 3 4 5 - 在while循环中,break用于永久停止循环
		a++;
		printf("%d ", a);
	}

	printf("\n---------------------------\n");

	int b = 0;

	//continue
	//while (b <= 10)
	//{
	//	if (b == 5)
	//		continue;//结果为1 2 3 4 5 然后死循环 - 在while循环中,continue用于结束本次循环,然后判断下一次循环是否执行
	//	b++;
	//	printf("%d \n", b);
	//}

	//
	int ch = 0;//
	while ((ch = getchar()) != EOF)//ch=getchar() 获取(键盘输入)一个字符放到ch里		如果getchar读取到的字符放到ch里后,不等于EOF(没遇到错误)
	{	//读取的是 Ctrl+z时,getchar读取的是EOF
		//getchar() - 读取一个字符,从一个stream里,或者是从标准输入(键盘输入) - 读取的是字符,包括\n(回车)
			//返回的是一个读到的字符(ASCII码值)
			//如果在读取中遇到一个错误或者文件结束,那这个函数返回的是EOF
				//也就是正确读取的话,返回的是读到的字符的ASCII码值，读取失败返回的是EOF(-1)
				//EOF - end of file - 文件结束标志
			//getchar获取字符的方法也可以 - getchar(变量名) 
	
		putchar(ch);//getchar读取字符,putchar打印字符串

	}

		
	return 0;
}