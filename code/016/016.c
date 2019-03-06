//题目: 输入两个正整数M和N，求其最大公约数和最小公倍数。

#include<stdio.h>

int gong(int m,int n); //求最大公约数函数
int bei(int m,int n); //求最小公倍数函数

void main()
{
	int m,n;
	printf("请输入两个正整数: ");
	scanf("%d %d",&m,&n);
	printf("最大公约数为: %d\n",gong(m,n));
	printf("最小公倍数为: %d\n",bei(m,n));
}

int gong(int m,int n)
{
	int i,temp;
	if(m>=n)
	{
		temp=m;
		m=n;
		n=temp;
	}
	for(i=m;i>=1;i--)
	{
		if(m%i==0&&n%i==0)
		{
			return i;
		}
	}
	return 1;
}

int bei(int m,int n)
{
	int i,temp;
	if(m>=n)
	{
		temp=m;
		m=n;
		n=temp;
	}
	for(i=n;i<=m*n;i++)
	{
		if(i%n==0&&i%m==0)
			return  i;
	}
	return m*n;
}

