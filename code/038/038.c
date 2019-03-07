//题目:有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。

#include<stdio.h>

void main()
{
	int a[8]={2,3,4,5,6,7,8};
	int x,i,j;
	printf("原数组为: ");
	for(i=0;i<7;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n请输入一个要插入的数: ");
	scanf("%d",&x);
	if(x>a[6])
	{
		a[7]=x;
	}
	else
	{
		for(i=0;i<7;i++)
		{
			if(a[i]>x)
			{
				for(j=7;j>i;j--)
				{
					a[j]=a[j-1]; //后移
				}
				a[i]=x;
				break;
			}
		}
	}
	printf("插入后数组为: ");
	for(i=0;i<8;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

