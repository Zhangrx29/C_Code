#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

int main()
{
    //  /
    float x = 6.f / 5.0f;//��߼Ӹ�f,�������Ϊfloat��������
    printf("%f\n", x);
    //  %
        //ȡģ���˱��������� 
    //  ���^  ���� - ������ͬ���������Ϊ0    0���κ��������������������
            int a = 3, b = 5;
            printf("a = %d b = %d\n",a,b);
            //a = a+b;
            //b = a - b;
            //a = a - b;
            //printf("a = %d b = %d\n",a,b);
        // ����(���)
            a = a ^ b;
            b = a ^ b;
            //�ϱ���������������൱�� a^b^b(������ͬ���������Ϊ0,0���κ��������������������,���Խ����a)
            a = a ^ b;
            printf("a = %d b = %d\n", a, b);

    //��дһ��������һ�������洢���ڴ��ж����Ƶĸ���
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