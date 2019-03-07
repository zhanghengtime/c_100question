//题目:打印出如下图案（菱形）。

#include<stdio.h>

void main(void)
{
	int i,j,k;
	for(i=0;i<=5;i++) //打印上半部分
	{
		for(j=0;j<5-i;j++)
			printf(" ");
		for(k=0;k<1+i*2;k++)
			printf("*");
		printf("\n");
	}
	for(i=0;i<=4;i++) //打印下半部分
	{
		for(j=0;j<i+1;j++)
			printf(" ");
		for(k=0;k<1+(4-i)*2;k++)
			printf("*");
		printf("\n");
	}
}