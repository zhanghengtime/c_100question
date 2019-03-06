//题目:将一个正整数分解质量数例如：输入90，打印出90 = 2 * 3 * 3 * 5。

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int num,i;
	printf("请输入一个正数: ");
	scanf("%d",&num);
	if(num==1)
	{
		printf("1 = 1");
		exit(1);
	}
	if(num<=0)
	{
		printf("输入错误!\n");
		exit(1);
	}
	printf("%d = ",num);
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d",i);
			num=num/i;
			if(num!=1)
				printf(" * ");
			i=1;  //重新从2开始循环
		}
	}
	printf("\n");
}
