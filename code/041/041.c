//��Ŀ:����3����a,b,c������С˳�������

#include<stdio.h>

void main()
{
	int a,b,c,max,min;
	printf("������3����: ");
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
	printf("��С����˳��: %d,%d,%d\n",min,a+c+b-min-max,max);
}
