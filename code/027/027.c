//��Ŀ:���õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������

#include<stdio.h>

void print(int i);

void main(void)
{
	int i=5;
	printf("������5���ַ�: ");
	print(i);
	printf("\n");
}

void print(int i)
{
	char next;
	if(i<=1)
	{
		next = getchar();
		printf("�෴�ķ������: ");
		putchar(next);
	}
	else 
	{
		next = getchar(); //���õݹ��ջ���任˳��
		print(i-1);
		putchar(next);
	}	
}

