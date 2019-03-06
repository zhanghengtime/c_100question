//Êä³ö9 * 9¿Ú¾÷¡£

#include<stdio.h>

void main(void)
{
	int i,j;
	for(i=1;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			printf("%d*%d=%2d  ",j,i,i*j);
		}
		printf("\n");
	}
}
