//��Ŀ:��һ��3��3����Խ���Ԫ��֮�͡�

#include<stdio.h>

void main()
{
	int a[3][3],i,j,sum=0;
	printf("������3x3�ԽǾ���: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("�Խ���֮��Ϊ: %d\n",sum);
}