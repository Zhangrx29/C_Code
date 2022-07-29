#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf
#include <string.h>

//C语言函数两种分类		库函数 / 自定义函数    
	//库函数 - C语言编译器提供的函数 - 可直接调用 - 库函数都是放到头文件里的,所以使用需要引用头文件
		//常用的函数有
		//IO函数 - 输入输出函数
		//字符串操作函数 - strcmp - strlen
		//字符操作函数 - 比如大写转小写,判断是不是小写字符 - toupper(小写转大写)
		//内存操作函数 - memcpy - memcmp - memset
		//时间/日期函数 - time
		//数学函数 - sqrt(开平方) - pow(求次方)
		//其他库函数 

//int main()
//{
////strcmp - 拷贝
//	char arr1[20] = { 0 };// { }  初始化数组元素时一个一个往里放的
//	char arr2[] = "hello world";// "" 引字符串的
//	strcpy(arr1, arr2);//将arr2内容拷贝放到arr1 - 因为数组本身就是地址,所以不需要取地址 -头文件<string.h>
//	printf("%s\n",arr1);//%s 打印字符串
//
////memset - 内存设置
//	char arr3[] = "hello bit";
//	memset(arr3, 'x', 5);//把arr3的前五个字节设置为x
//	printf("%s\n", arr3);
//
//
//	return 0;
//}