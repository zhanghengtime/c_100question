//题目:输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。

#include<stdio.h>

int main()
{
	int a[5],i,max,min,ik,im;
	printf("请输入5个数: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	max=min=a[0];
	ik=im=0;
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			ik=i;
			max=a[i];
		}
		if(a[i]<min)
		{
			im=i;
			min=a[i];
		}
	}
	i=a[0];
	a[0]=max;
	a[ik]=i;
	i=a[4];
	a[4]=min;
	a[im]=i;
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
	
		
	