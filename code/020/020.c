//题目:一球从100米高度自由落下，每次落地后反跳回原高度的一半;再落下，求它在第10次落地时，共经过多少米第10次反弹多高？

#include<stdio.h>

void main(void)
{
	double x=100;
	int i;
	for(i=1;i<=10;i++)
	{
		x/=2;
		printf("%.3lf ",x);
	}
	printf("\n");
}

