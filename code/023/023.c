//��Ŀ:��ӡ������ͼ�������Σ���

#include<stdio.h>

void main(void)
{
	int i,j,k;
	for(i=0;i<=5;i++) //��ӡ�ϰ벿��
	{
		for(j=0;j<5-i;j++)
			printf(" ");
		for(k=0;k<1+i*2;k++)
			printf("*");
		printf("\n");
	}
	for(i=0;i<=4;i++) //��ӡ�°벿��
	{
		for(j=0;j<i+1;j++)
			printf(" ");
		for(k=0;k<1+(4-i)*2;k++)
			printf("*");
		printf("\n");
	}
}