//��Ŀ:�ж�һ�������Ƿ�Ϊ������

#include<stdio.h>
#include<stdlib.h>

void main()
{
	long i,j;
	printf("������һ����: ");
	scanf("%ld",&i);
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
			printf("%ld��������!\n",i);
			exit(1);
		}
	}
	printf("%ld������!\n",i);
}