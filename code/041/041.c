//题目:输入3个数a,b,c，按大小顺序输出。

#include<stdio.h>

void main()
{
	int a,b,c,max,min;
	printf("请输入3个数: ");
	scanf("%d %d %d",&a,&b,&c);
	max=min=a;
	if(b>max)
	{
		max=b;
		if(c>b)
			max=c;
		else
		{
			if(c<a)
				min=c;
		}
	}
	else 
	{
		if(c>max)
			max=c;
		else
		{
			if(b<c)
				min=b;
			else 
				min=c;
		}
	}
	printf("从小到大顺序: %d,%d,%d\n",min,a+c+b-min-max,max);
}
