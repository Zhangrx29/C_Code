#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//排序为升序 - 冒泡排序 

//冒泡排序的思想:两两相邻的元素进行比较,可能的话需要交换

sort(int arr[], int sz)
{
	int i;
	int j;
	for (i = 0; i < sz - 1; i++)	//确定交换趟数
	{
		for (j = 0;j<sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])//判断第0个是否大于第一个
			{
				//交换
				int tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
			}
		}

	}
}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//
//	//问 - 数组名是什么
//	//数组名是首元素地址
//	printf("%p\n", &arr[0]);//首元素地址
//	printf("%p\n", arr);//数组名
//	//结果一样,再次论证 - 数组名是首元素地址
//	//但是有两个例外
//	// 01 - sizeof(数组名) - 这时的数组名表示整个数组,计算的是整个数组大小,单位是字节
//	// 02 - &数组名 - 表示整个数组,取出的是整个数组的地址
//	//---
//	printf("%p\n", arr);//数组名		这个+1是加4个地址(int类型4字节)
//	printf("%p\n", &arr);//数组的地址    //和上边这个值一样是非常正常,但是意义不一样   比如这个+1是加40(整个元素的地址,一个int的地址是+4)
//	printf("%p\n", &arr[0]);//数组首元素地址
//	return 0;
//}

