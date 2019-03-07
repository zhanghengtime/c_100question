//题目:删除一个字符串中的指定字母，如：字符串“ACA”，删除其中的一个字母。

#include<stdio.h>

void main(void)
{
	char str[10];
	char *p,*q;
	char x;
	printf("请输入字符串: ");
	gets(str);
	printf("请输入要删除的字符: ");
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

