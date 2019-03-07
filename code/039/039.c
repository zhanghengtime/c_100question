//题目:将一个数组逆序输出。

#include<stdio.h>

void main(void)
{
	int a[10],i;
	printf("请输入10个数: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n逆序输出: ");
	for(i=9;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
	