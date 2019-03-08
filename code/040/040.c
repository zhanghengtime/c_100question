//题目:打印出杨辉三角形


//方法一
#include<stdio.h>
#include<stdlib.h>

void print(int x);
void yang(int a[],int x);

void main(void)
{
	int x;
	printf("请输入你想打印的行数: ");
	scanf("%d",&x);
	print(x+1);
}

void print(int x)
{
	int i,j,k,*a,num=0;
	a=(int *)malloc(sizeof(int)*x*(x-1)/2);
	yang(a,x);
	for(i=0;i<x;i++)
	{	
		for(j=x-i;j>0;j--)
			printf("  ");
		for(k=0;k<i;k++)
		{
			printf("%5d",a[num]);
			num++;
		}
		printf("\n");
	}
	//free(a); free会出错，我也不知道为什么
}

void yang(int a[100],int x)
{
	int i,j,k,flag,num=2;
	a[0]=1;
	for(i=1,j=1,k=2;i<x;i++)
	{
		a[j]=1;
		a[k]=1;
		j=j+i+1;
		flag=k;
		k=k+i+2;
	}
	if(x>=3)
	{
		for(i=4;i<flag;)
		{
			for(k=1;k<num;k++)
			{
				a[i]=a[i-num]+a[i-num-1];
				i=i++;
			}
			i=i+2;
			num++;
		}
	}
}


//方法二 较简单
/*
#include<stdio.h>

void main(void)
{	
	int i,j,a[10][10];
	for(i=0;i<10;i++)
	{
		a[i][i]=1;
		a[i][0]=1;
	}
	for(i=2;i<10;i++)
	{
		for(j=1;j<i;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%-5d ",a[i][j]);
		}
		printf("\n");
	}
}
*/		
