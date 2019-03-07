//题目:求一个3×3矩阵对角线元素之和。

#include<stdio.h>

void main()
{
	int a[3][3],i,j,sum=0;
	printf("请输入3x3对角矩阵: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("对角线之和为: %d\n",sum);
}