//输入三个整数X，Y，Z，请把这三个数由小到大输出。

#include<stdio.h>

void main()
{
	int x,y,z,min,max;
	printf("请输入x,y,z: ");
	scanf("%d %d %d",&x,&y,&z);
	min=max=x;
	if(y>max)   //做比较
	{
		max=y;
		if(z>max)
			max=z;
		if(z<min)
			min=z;
	}
	else
	{
		min=y;
		if(z<min)
			min=z;
		if(z>x)
			max=z;
	}
	printf("从小到大的顺序为: %d,%d,%d\n",min,(x+y+z)-min-max,max);
}
