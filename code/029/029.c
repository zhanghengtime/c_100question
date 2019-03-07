//给一个不多于5位的正整数，要求：一，求它是几位数，二，逆序打印出各位数字。

#include<stdio.h>

void main()
{
	int x,i;
	printf("请输入一个不多于5位的正整数: ");
	scanf("%d",&x);
	for(i=1;;i++)
	{
		if(x/10>=1)
		{
			printf("%d ",x%10);
			x=x/10;
		}
		else
		{
			printf("%d",x);
			break;
	    }
	}
	printf("\n一共有%d位数!",i);
	printf("\n");
}
