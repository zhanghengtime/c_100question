//题目: 字符串反转，如将字符串“www.runoob.com”反转为“moc.boonur.www”。

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
