#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int main()
{
	//按位
	int a = 11;
	//00000000 00000000 00000000 00001011		修改倒数第五位为1
	//00000000 00000000 00000000 00010000		按位与
	a = a | (1 << 4);
	//00000000 00000000 00000000 00011011
	printf("a = %d\n", a);//27
		//按位取反 - 修改倒数第五位为0
		a = a & ~(1<<4);
		printf("修改0 a = %d\n", a);


	//赋值
	a = 10;
	int x = 0;
	int y = 20;
		//连续赋值
			a = x = y-5;//从右向左赋值
			printf("a = %d x = %d y = %d\n", a, x, y);

	//sizeof
			int arr[10] = { 0 };
		printf("%d\n",sizeof(a));
		printf("%d\n", sizeof(int));//也可以直接写类型

		printf("%d\n", sizeof(arr));
		printf("%d\n", sizeof(int [10]));//除去变量名本身就是类型
		
		short n = 12;
		printf("%d\n", sizeof(n));
		n = a;
		printf("%d\n", sizeof(n));

	//逻辑与和逻辑或的特点
		printf("\n逻辑与和逻辑或的特点\n");
		//只要将前边的判断出结果后就不会判断后边的,比如↓
		int i = 0,  q = 0, w = 2, e = 3, r = 4;
		i = q++ || ++w || e++;//		|| 只要有一个真,结果就是真 - 前边的q为假,继续判断,w为真,判断完成(真),后边的就不再执行判断
		printf("q = %d\nw = %d\ne = %d\nr = %d\n", q, w, e, r);//1 3 3 4
		i = i++ || q++ || ++w;//判断i为假,继续判断,q为假,再继续判断,w为真		(因为是 || -- 只要有一个真,结果就是真)
		printf("\nq = %d\nw = %d\ne = %d\nr = %d\n", q, w, e, r);//1 3 3 4

	//条件操作符(三目操作符)
		printf("\n条件操作符(三目操作符)\n");
		a = 3;
		int b = 2;
		int c = 0;
		b = (a > 5 ? 1 : -1);//a>5吗 如果是,结果为1,否则结果为-1,最后赋值给b
		printf("b = %d\n", b);

		int max = (a > b ? a : b); //a > b吗 如果是, 结果为a, 否则结果为b, 最后赋值给max
		printf("max = %d\n", max);

	//逗号表达式 
		printf("\n逗号表达式\n");
		int d = (c = 5, a = c + 3, b = a - 4, c += 5);//从左至右依次计算,整个表达式的结果是最后一个表达式的结果
		printf("a = %d b = %d c = %d d = %d", a, b, c, d);//  8 4 10 10 
	return 0;
}