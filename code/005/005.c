//������������X��Y��Z���������������С���������

#include<stdio.h>

void main()
{
	int x,y,z,min,max;
	printf("������x,y,z: ");
	scanf("%d %d %d",&x,&y,&z);
	min=max=x;
	if(y>max)   //���Ƚ�
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
	printf("��С�����˳��Ϊ: %d,%d,%d\n",min,(x+y+z)-min-max,max);
}
