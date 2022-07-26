#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//struct
//结构体的创建 - 创建一个学生的结构体
struct student
{
	char name[20];//成员变量
	int age;//成员变量
	double score;//成员变量
};

int main()
{
	struct student Zh = { "Zhangrx",16,98.5 };//结构体的初始化
	printf("No.1:%s,%d,%lf\n", Zh.name, Zh.age, Zh.score);//调用 - 结构体变量.成员变量

	//把结构体的内容交给指针后也能打印出相应的内容
		struct student *pe = &Zh;//stuct student 类型的指针变量指向Zh  -  *解引用
		printf("No.2:%s,%d,%lf\n", (*pe).name, (*pe).age, (*pe).score);//这里是对pe的解引用操作,再找到这个结构体的成员
		
		//下边这种写法等价于上边那一种写法,但是下边这样写更直观
		printf("No.3:%s,%d,%lf\n", pe->name, pe->age, pe->score);//pe->成员变量 -- pe指针变量先找到它对应的变量,然后再找到它的成员变量名


	return 0;
}