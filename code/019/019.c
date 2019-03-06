//题目:一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6 = 1 + 2 + 3.编程找出1000以内的所有完数。
// 28 = 1 + 2 + 4 + 7 + 14
#include<stdio.h>

void main(void)
{
	int i,j,num;
	printf("完数: ");
	for(i=2;i<=1000;i++)
	{
		num=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
				num=num+j;
		}
		if(num==i)
			printf("%d ",i);
	}
	printf("\n");
}
	
