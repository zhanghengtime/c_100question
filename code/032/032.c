//��Ŀ:ɾ��һ���ַ����е�ָ����ĸ���磺�ַ�����ACA����ɾ�����е�һ����ĸ��

#include<stdio.h>

void main(void)
{
	char str[10];
	char *p,*q;
	char x;
	printf("�������ַ���: ");
	gets(str);
	printf("������Ҫɾ�����ַ�: ");
	scanf("%c",&x);
	p=str;
	q=p;
	for(;*p!='\0';p++)
	{
		if(*p!=x)
		{
			*q=*p;
			q++;
		}
	}
	*q='\0';
	puts(str);
}

