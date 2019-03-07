//请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。

#include<stdio.h>

void main(void) //m t w t f s s 
{
	char x,m;
	printf("请输入第一个字母: ");
	scanf("%c",&x);
	if(x=='M'||x=='m')
	{
		printf("Monday!\n");
	}
	else if(x=='t'||x=='T')
	{
		printf("请输入第二个字母: ");
		scanf("%c",&m);
		while(m==10) //防止把回车键读入
		{
			scanf("%c",&m);
		}
		if(m=='u'||m=='U')
		{
			printf("Tuesday!\n");
		}
		else if(m=='h'||m=='H')
		{
			printf("Thursday!\n");
		}
		else
		printf("Error!\n");
	}
	else if(x=='W'||x=='w')
	{
		printf("Wednesday!\n");
	}
	else if(x=='s'||x=='S')
	{
		printf("请输入第二个字母: ");
		scanf("%c",&m);
		while(m==10)
		{
			scanf("%c",&m);
		}
		if(m=='u'||m=='U')
		{
			printf("Sunday!\n");
		}
		else if(m=='h'||m=='H')
		{
			printf("Saturday!\n");
		}
		else
		printf("Error!\n");
	}
	else
		printf("Error!\n");
}
		
