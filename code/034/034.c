//��Ŀ: �ַ�����ת���罫�ַ�����www.runoob.com����תΪ��moc.boonur.www����

#include<stdio.h>

void main(void)
{
	char str[]="www.runoob.com";
	char *p=str;
	for(;*p!='\0';p++);
	for(p--;p!=str;p--)
	{
		printf("%c",*p);
	}
	printf("%c",*p);
	printf("\n");
}
