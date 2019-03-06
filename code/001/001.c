//题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

//方法一
#include<stdio.h>

void main(void)
{
	int i,j,k,num,sum=0;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			for(k=1;k<=4;k++)
			{
				if(i!=j&&k!=i&&j!=k)
				{
					num = i*100+j*10+k; 
					printf("%d ",num);
					sum++;
				}
			}
		}
	}
	printf("\n总数为: %d\n",sum);
}





/*方法二
#include<stdio.h>

int check(int n);

void main(void)
{
	int a,b,c,num,i=0;
	for(num=100;num<1000;num++)
	{
		a = num/100;
		b = num/10%10;
		c = num%10;
		if(a!=b&&b!=c&&a!=c)
		{
			if(check(a)+check(b)+check(c)>=3)
			{
				printf("%d ",num);
				i++;
			}
		}
	}
	printf("\n总数为: %d\n",i);
}

int check(int n)
{
	if(1<=n&&n<=4)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}*/



