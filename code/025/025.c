//��Ŀ:��1 + 2��+3��+ ... + 20���ĺ͡�

#include<stdio.h>

long double pi(int i);

void main()
{
	int i;
	long double sum=0; //ֻ����long double���洢
	for(i=1;i<=20;i++)
	{
		sum=sum+pi(i);
	}
	printf("%.0lf\n",sum);
}

long double pi(int i)
{
	int j;
	long double sum=1;
	for(j=1;j<=i;j++)
	{
		sum=sum*j;
	}
	return sum;
}


