#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int main()
{
    //  /
    float x = 6.f / 5.0f;//后边加个f,声明这个为float类型数字
    printf("%f\n", x);
    //  %
        //取模两端必须是整数 
    //  异或^  交换 - 两个相同数字异或结果为0    0和任何数字异或结果还是它本身
            int a = 3, b = 5;
            printf("a = %d b = %d\n",a,b);
            //a = a+b;
            //b = a - b;
            //a = a - b;
            //printf("a = %d b = %d\n",a,b);
        // 交换(异或)
            a = a ^ b;
            b = a ^ b;
            //上边这两个步骤异或相当于 a^b^b(两个相同的数字异或为0,0和任何数字异或结果还是它本身,所以结果是a)
            a = a ^ b;
            printf("a = %d b = %d\n", a, b);

    //编写一个代码求一个整数存储在内存中二进制的个数
        int A = 13;
        int count = 0;
        while (A)
        {
            if (A & 1)
            {
                A >>= 1;
                count++;
            }
            else
            {
                A >>= 1;
            }
        }
        printf("count = %d", count);

    return 0;
}