//题目：求100之内的素数。

#include<stdio.h>

void main(void)
{
	int i,j,flags;
	printf("100以内的素数有: 1 ");
	for(i=2;i<=100;i++)
	{
		flags=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flags=1;
			}
		}
		if(flags==0)
			printf("%d ",i);
	}
	printf("\n");
}