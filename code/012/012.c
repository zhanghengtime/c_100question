//��Ŀ:�ж�101��200֮���������

#include<stdio.h>

void main(void)
{
	int i,j;
	printf("101��200֮�������: ");
	for(i=101;i<=200;i++) //����ѭ�������ж�
	{	
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(j==i)
			printf("%d ",i);
	}
	printf("\n");
}
		