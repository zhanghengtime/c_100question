//��Ŀ:��һ�������У�2/1, 3/2, 5/3,8/5,13/8,21/13 ...���������е�ǰ20��֮�͡�

#include<stdio.h>

void main(void)
{
	double i,j,temp,num=0;
	int k;
	i=2.0;
	j=1.0;
	for(k=0;k<20;k++)
	{
		num=i/j+num;
		temp=j;
		j=i;
		i=i+temp;
	}
	printf("%lf\n",num);
}