//���������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ��

#include<stdio.h>

void main(void) //m t w t f s s 
{
	char x,m;
	printf("�������һ����ĸ: ");
	scanf("%c",&x);
	if(x=='M'||x=='m')
	{
		printf("Monday!\n");
	}
	else if(x=='t'||x=='T')
	{
		printf("������ڶ�����ĸ: ");
		scanf("%c",&m);
		while(m==10) //��ֹ�ѻس�������
		{
			scanf("%c",&m);
		}
		if(m=='u'||m=='U')
		{
			printf("Tuesday!\n");
		}
		else if(m=='h'||m=='H')
		{
			printf("Thursday!\n");
		}
		else
		printf("Error!\n");
	}
	else if(x=='W'||x=='w')
	{
		printf("Wednesday!\n");
	}
	else if(x=='s'||x=='S')
	{
		printf("������ڶ�����ĸ: ");
		scanf("%c",&m);
		while(m==10)
		{
			scanf("%c",&m);
		}
		if(m=='u'||m=='U')
		{
			printf("Sunday!\n");
		}
		else if(m=='h'||m=='H')
		{
			printf("Saturday!\n");
		}
		else
		printf("Error!\n");
	}
	else
		printf("Error!\n");
}
		
