//printf - 库函数 - 打印
//printf 的使用,也得打招呼(引用头文件 stdio.h)


#include <stdio.h>//包含一个头文件stdio.h

//int main()
//{
//	printf("Hello C");
//
//	return 0;
//}

//编译+链接+运行
// 菜单->调试->开始执行(不调试)    快捷键ctrl+F5

//一个工程中可以有多个  .c文件
//多个  .c文件中只能有一个main()函数



//数据类型 (整形,浮点数


//int main()
//{
//	//字符数据类型 char
//	char name = '小绿';
//	//整形 int
//	int age = 20;
//	//短整型 short
//	short num = 10;
//	//长整型 long
//	//更长整形 long long
//	//浮点类型/单精度浮点型 float
//	float weight = 55.5;
//	//双精度浮点型 double
//	double year=18.5;
//
//	return 0;
//}



//每个类型大小是多少?

int main()
{
	printf("heheh\n");
	printf("啦啦啦\n");
	printf("%d\n", 99);//打印一个整数 - %d

	//sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间大小

	printf("char:%d\n", sizeof(char));//1
	printf("short:%d\n", sizeof(short));//2
	printf("int:%d\n", sizeof(int));//4
	printf("long:%d\n", sizeof(long));//4
	printf("float:%d\n", sizeof(float));//4
	printf("long long:%d\n", sizeof(long long));//8
	printf("double:%d\n", sizeof(double));//8	
	return 0;
}