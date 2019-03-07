//题目:对10个数进行排序。

#include<stdio.h>

void main(void)
{
	int a[10],i,j,temp;
	printf("请输入10个数: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i-1;j++)
		{
			if(a[j]>a[j+1]) //从小到大排序
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
} 

