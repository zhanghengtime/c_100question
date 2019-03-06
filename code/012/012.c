//题目:判断101到200之间的素数。

#include<stdio.h>

void main(void)
{
	int i,j;
	printf("101到200之间的素数: ");
	for(i=101;i<=200;i++) //两个循环进行判断
	{	
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(j==i)
			printf("%d ",i);
	}
	printf("\n");
}
		