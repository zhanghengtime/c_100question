//题目:判断一个数字是否为质数。

#include<stdio.h>
#include<stdlib.h>

void main()
{
	long i,j;
	printf("请输入一个数: ");
	scanf("%ld",&i);
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
			printf("%ld不是质数!\n",i);
			exit(1);
		}
	}
	printf("%ld是质数!\n",i);
}