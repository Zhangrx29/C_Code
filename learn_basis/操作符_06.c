#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

minus(int q, int r)
{
	return q - r;
}


int main()
{
	//算术操作符		+ - * / %

	//移位操作符 - 移动的是二进制位 - 左移乘2，右移除2
		int a = 3;
		int b = a << 3;//b=a的左移动一位
		//移动的是二进制位 --- int=4字节=32比特位
		//int 2的二进制为00000000 00000000 00000000 00000010	-	左移一位为00000....100
		printf("%d\n", b);//4


	//位操作符
	//	&	按位与
	//	|	按位或
	//	^	按位异或


	//赋值运算符
		int c = 4;//赋值
		c += 5;//加且赋值	c=9
		c -= 3;//减且赋值	c=6
		c *= 2;//乘且赋值	c=12
		c /= 2;//除且赋值	c=6
		c %= 4;//求模(取余)且赋值	c=2
		c <<= 3;//左移位且赋值	c=16
		c >>= 3;//右移位且赋值	c=2
		c &= 2;//按位与且赋值	
		c |= 2;//按位或且赋值
		c ^= 2;//按位异或且赋值

	printf("%d\n", c);

	printf("--------------------单目操作符↓--------------------\n");
	//单目操作符
		//	a+b - 这个+有两个操作数,所以是双目操作符   --  单目操作符 - 只有一个操作数

		//	! 逻辑反操作 0表示假,非0表示真
			int d = 5;
			printf("逻辑反操作 %d", !d);//	0	逻辑取反后的值非0即1
			int e = 0;
			printf("% d\n", !e);//	1

			if (d)
			{
				//如果a为真(True),执行这个语句块
				//0表示假,非0表示真
			}

			if (!d)
			{
				//如果a为假,执行这个语句块
				//0表示假,非0表示真
			}

		//	- 负值
			int f = -5;
			printf("%d\n", f);//-5

		// + 正值
		//和负值同理
	
		//	&	取地址 

		//	sizeof 操作数的类型长度(以字节为单位)	-	计算类型或者变量的大小
			printf("int大小:%d\n", sizeof(int));//计算int类型的大小
			int g = 1;
			printf("变量g大小:%d\n", sizeof(g));//计算a的结果和计算a的类型的结果一样
			printf("变量g大小:%d\n", sizeof g);//他不是函数,所以括号可以省略 - 求变量可以省略,求类型不可省略

			int h[5] = { 0 };
			printf("数组h大小:%d\n", sizeof(h));//20	-	因为h是五个int类型的元素,所以4*5 = 20
			int i = sizeof(h) / sizeof(h[0]);//	i = 20/4
			printf("i=%d\n", i);

		//	~ 按位(二进制)取反 - (符号位不变)
			int j = 0;
			int k = 2;
			int l = -2;
			printf("\" % d\n", ~j);//0的按位取反是-1
			printf("%d\n", ~k);//正整数的按位取反是其本身+1的负数	// -3
			printf("%d\n", ~l);//负整数的按位取反是其本身+1的绝对值// 1

		// ++	 前置,后置++	 
			int m = 10;
			int n = ++m;//前置++  -  先++后使用 在这里是先把m++(11),然后赋值给n
			printf("%d\n", n);//11
			printf("%d\n", m);//m(10)已经++了,所以m=11
		
			int o = m++;//后置++ 先使用再++
			printf("%d\n", o);
			printf("%d\n", m);


		// --		前置,后置--
			// --和++的用法一样 -		-- = -1		++ = +1


		// (类型)	强制类型转换 
			int p = (int)3.14;//(类型)3.14
			printf("% d\n", p);

		// *	间接访问操作符(解引用操作符) 


	//关系操作符
		//	<=	小于等于
		//	>=	大于等于
		//	<		小于
		//	>		大于
		//	!=		不等于
		//	==	等于

		//逻辑操作符
			//	&&	逻辑与
			int num_1 = 1;
			int num_2 = 2;
			int num_3 = 0;

			int num_4 = num_1 && num_2;
			int num_5 = num_1 && num_3;
			printf("num_4=%d\n", num_4);//1 因为num_1和num_2的值都为真,所以结果等于真
			printf("num_5=%d\n", num_5);//0 这里num_1为真,num_3为假,&&里只要有一个假的,结果就是假的

			//	||		逻辑或
			int num_6 = num_1 || num_3;
			printf("%d\n", num_6);//1 只要有一个真的结果就是真

			if (num_1 == num_2 || num_2)
			{
				printf("这个if执行了\n");

			}
			else
			{
				printf("这个if没执行,执行的else\n");
			}

		//条件操作符(三目操作符)
			//	exp1? exp2 : exp3	exp(表达式)
			//exp1如果成立,exp2计算,整个表达式的结构是:exp2的结果 
			//exp1如果不成立,exp3计算,整个表达式的结构是:exp3的结果
			
			int A = 5;
			int B = 0;
			int max;
			max = A > B ? A : B;//A是否大于B,如果True,max等于A,否则max=B
			printf("%d\n", max);//max=A=5

			if (A > B ? A : B)//A是否大于B,如果True,就是A,否则是B		A=5=True,所以继续执行
				printf("AAAAAAA\n");


		//逗号表达式 - 逗号隔开的一串表达式
			
			//逗号表达式是从左至右以此计算
			//整个表达式的结果是最后一个表达式的结果
			int AA = 5;
			int BB = 8;
			int CC = 0;

			int True =(AA=BB*2,CC=AA,CC-=BB);
			printf("%d\n", True);//8

			printf("---------------------------\n");
		//	下标引用,函数调用和结构成员

			int arr[8] = { 5,1,2,8,4,5,6,3 };
			printf("%d\n", arr[7]);//	[]	下标引用操作符

			//函数调用
			int Minus = minus(9, 6);
			printf("Minus=%d\n", Minus);
			printf("%d\n", minus(8, 2));
			

	return 0;

}