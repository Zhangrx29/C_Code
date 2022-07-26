#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int main()
{
	//getchar()用途
	char password[20] = { 0 };
	printf("请输入您的密码");
	scanf("%s", password);//数组不用取地址,数组名本身就是个地址
		//此时输入完之后缓冲区会有\n,执行到getchar会自动拿走,然后导致ch=\n
			//解决:  输入完后清理缓冲区↓
//	getchar();	//把缓冲区东西拿走
		//如果输入的时候用空格分开了,导致缓冲区还有多个字符,可以使用while循环清理缓冲区多个内容↓
			int tem = 0;
			while ((tem = getchar()) != '\n')//一直读取字符并且赋给tem,当读取到\n停止
			{
				;
			}
			
	
	printf("请确认您的密码(Y/N):\n");
	int ch = getchar();//把获取的字符存到ch里 - 读取的缓冲区里的数据 \n(回车)也算字符 - 鹏哥的P32视频
		//读取的是字符为什么用int存储 - 以ASCII码值存储(整形)
	if (ch == 'Y')
		printf("确认成功\n");
	else
		printf("确认失败\n");
	
	
	return 0;
}