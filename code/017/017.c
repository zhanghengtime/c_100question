//输入一行字符，分别统计出其中英文字母，空格，数字和其它字符的个数。

#include<stdio.h>

void main(void)
{
	char s[30],*p;
	int j=0,k=0,z=0,g=0;
	p=s;
	printf("请输入一行字符: ");
	gets(p);  //用gets保证可以输入空格
	for(;*p!='\0';p++)
	{
		if((('a'<=*p)&&(*p<='z'))||(('A'<=*p)&&(*p<='Z')))
		{
			j++;
		}
		else if(*p==' ')
		{
			k++;
		}
		else if(('0'<=*p)&&(*p<='9'))
		{
			z++;
		}
		else 
		{
			g++;
		}
	}
	printf("字母: %d  数字 %d  空格 %d  其他符号 %d\n",j,z,k,g);
}
