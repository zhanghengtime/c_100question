//���������������Ƕ������ɴ��⣺ѧϰ�ɼ�> = 90�ֵ�ͬѧ�üױ�ʾ��60-89��֮������ұ�ʾ��60�����µ��ñ���ʾ��

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int num;
	printf("������ɼ�: ");
	scanf("%d",&num);
	if(num>100||num<0)
	{
		printf("error!\n");
		exit(1);
	}
	if(num>=90)
		printf("�ɼ�Ϊ��!\n");
	else if(60<=num&&num<=89)
	{
		printf("�ɼ�Ϊ��!\n");
	}
	else
	{
		printf("�ɼ�Ϊ��!\n");
	}
}