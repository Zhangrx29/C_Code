#define _CRT_SECURE_NO_WARNINGS 1//scanf
#include <stdio.h>//printf

//struct
//�ṹ��Ĵ��� - ����һ��ѧ���Ľṹ��
struct student
{
	char name[20];//��Ա����
	int age;//��Ա����
	double score;//��Ա����
};

int main()
{
	struct student Zh = { "Zhangrx",16,98.5 };//�ṹ��ĳ�ʼ��
	printf("No.1:%s,%d,%lf\n", Zh.name, Zh.age, Zh.score);//���� - �ṹ�����.��Ա����

	//�ѽṹ������ݽ���ָ���Ҳ�ܴ�ӡ����Ӧ������
		struct student *pe = &Zh;//stuct student ���͵�ָ�����ָ��Zh  -  *������
		printf("No.2:%s,%d,%lf\n", (*pe).name, (*pe).age, (*pe).score);//�����Ƕ�pe�Ľ����ò���,���ҵ�����ṹ��ĳ�Ա
		
		//�±�����д���ȼ����ϱ���һ��д��,�����±�����д��ֱ��
		printf("No.3:%s,%d,%lf\n", pe->name, pe->age, pe->score);//pe->��Ա���� -- peָ��������ҵ�����Ӧ�ı���,Ȼ�����ҵ����ĳ�Ա������


	return 0;
}