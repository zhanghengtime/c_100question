//题目: 有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数。

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,m,temp,j;
	int *a;
	printf("请输入整数个数: ");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int)*n);
	printf("请输入整数: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("请输入后移位置数: ");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{	
		temp = a[n-1];
		for(j=0;j<n;j++)
		{
			a[n-1-j]=a[n-2-j];
		}
		a[0] = temp;
	}
	printf("后移%d后: ",m);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
