//��Ŀ:��10������������

#include<stdio.h>

void main(void)
{
	int a[10],i,j,temp;
	printf("������10����: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i-1;j++)
		{
			if(a[j]>a[j+1]) //��С��������
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
} 

