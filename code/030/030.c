//一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。

#include<stdio.h>

void main(void)
{
	int x;
	printf("请输入一个5位数: ");
	scanf("%d",&x);
	while(x<9999||x>999999) //异常输入处理
	{
		printf("输入错误，请重新输入!\n");
		printf("请输入一个5位数: ");
		scanf("%d",&x);
	}
	if(x%10==x/10000)
	{
		if(x%100/10==x%10000/1000)
			printf("%d是回文数\n",x);
		else
			printf("不是回文数!\n");
	}
	else
	{
		printf("不是回文数!\n");
	}
}