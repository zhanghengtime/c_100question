//��Ŀ:��һ���������������

#include<stdio.h>

void main(void)
{
	int a[10],i;
	printf("������10����: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n�������: ");
	for(i=9;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
	