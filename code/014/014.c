//��Ŀ:��һ���������ֽ����������磺����90����ӡ��90 = 2 * 3 * 3 * 5��

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int num,i;
	printf("������һ������: ");
	scanf("%d",&num);
	if(num==1)
	{
		printf("1 = 1");
		exit(1);
	}
	if(num<=0)
	{
		printf("�������!\n");
		exit(1);
	}
	printf("%d = ",num);
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d",i);
			num=num/i;
			if(num!=1)
				printf(" * ");
			i=1;  //���´�2��ʼѭ��
		}
	}
	printf("\n");
}
