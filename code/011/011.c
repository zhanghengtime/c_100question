//�ŵ����⣨�������̣�����һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ�
//�������Ӷ���������ÿ���µ���������Ϊ���٣������ǰ40���¼��ɣ�


#include<stdio.h>  //쳲��������� �ݹ���ʽ fac(n-1)+fac(n-2)

int fac(int n);

void main(void)
{
	int i;
	for(i=1;i<=40;i++)
	{
		printf("%d ",fac(i));
	}
	printf("\n");
}

int fac(int n)
{	
	if(n<3)
	{
		return 1;
	}
	return fac(n-1)+fac(n-2);
}



/*
#include<stdio.h>  //�ǵݹ�ʵ�� �����ٶ���������

void main(void)
{
	int i,num1,num2,num3;
	for(i=1;i<=40;i++)
	{
		if(i<3)
		{
			num1=1;
			num2=1;
			printf("%d ",num1);
		}
		else
		{
			num3=num1+num2;    
			num1=num2;          
			num2=num3;         
			printf("%d ",num3);
		}
	}
	printf("\n");
}
*/



