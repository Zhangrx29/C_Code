#define _CRT_SECURE_NO_WARNINGS 1//使用输入scanf   //必须要放到源文件的第一行
#include <stdio.h>//使用输出printf

//int main()
//{
//	int age = 16;
//	double weight = 105.5;
//
//	//变量 修改
//	age = age + 1;
//	weight = weight - 5;
//
//	printf("%d\n",age);
//	printf("%lf\n", weight);
//
//	return 0;
//}

//%d - 整形
//%f - float
//%lf - double


//局部变量与全局变量

//全局变量 - {}外部定义的变量 

int year = 2022;

//局部变量

//int main()
//{
//	// 局部变量 - {}内部定义的变量
//	//当局部变量和全局变量冲突时,局部优先
//	//不建议全局变量和局部变量名称一样
//	printf("%d\n", year);
//	int year = 2021;
//	printf("%d\n", year);
//	return 0;
//}


//输入2个代码求和
//scanf - 输入函数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//输入两个整形,按顺序放到a和b里//输入格式为%d+空格+%d
//	int add = a + b;
//	printf("%d\n", add);
//
//	return 0;
//}


//作用域和生命周期

//局部变量的作用域:变量所在的局部范围
//全局变量的作用域:整个工程(不在一个源文件时需声明--78行)
int age = 16;//全局变量

//int main()
//{
//	printf("666\n");
//	printf("age=%d\n", age);
//	{
//		int num = 555;//局部变量
//		printf("num=%d\n", num);
//		//num作用域在这个大括号的小括号内
//	}
//	return 0;
//}

//全局变量 - 不在同一源文件时,需要声明
extern int Zhangrx_age;//声明变量int Zhangrx_age

//int main()
//{
//	printf("Zhangrx_age=%d", Zhangrx_age);
//	return 0;
//}
//生命周期
//变量的声明周期:变量的创建与销毁的时间段
//
//局部变量的生命周期:进入局部范围->出局部范围


//常量

#define  velue 1000//定义一个常量velue的值为1000



//int main()
//{
//	//01.字面常量
//	3.14;
//	5;
//	'a';
//	"abcde";
//
//	// 02.const修饰的常变量(常变量本质还是变量,只不过具有了常属性)
//	const int num = 50;//定义常变量
//	//num = 40;//报错不可修改
//	printf("num=%d\n", num);//50
//
//	//常变量
//	int arr[10] = { 0 };//这个数组10个元素
//	const x= 8;//定义常变量
//	//int arr_2[x] = { 0 };//x的位置必须是常量,为什么用过const还是不行?因为const是定义的常变量,不是常量
//	
//
//	//03. #define定义的标识符常量
//	//需要提前定义--93行
//	int y = velue;//y=1000
//
//}

//04.枚举常量
enum Sex
{
	//枚举常量可能会取的值
	MALE=5,//赋初值
	FEMALE,
};

int main()
{
	//04.枚举常量enum - 可以一一列举的常量--123行
	enum Sex z = MALE;//枚举变量z可能取值的结果为MALE
	printf("%d\n", z);
	int arr_2[MALE] = { 0 };
	return 0;
}