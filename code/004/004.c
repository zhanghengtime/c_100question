// ��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿

#include<stdio.h>
#include<stdlib.h>

int check(int y,int m,int d); //��麯��
int comput(int y,int m,int num); //���㺯��
int flag=0; //�����־ ������1 ��������0

void main()
{
	int y, m,d,num;
	printf("���������: ");
	scanf("%d",&y);
	printf("�������·�: ");
	scanf("%d",&m);
	if(0>m||12<m)
	{
		printf("�������!\n");
		exit(1);
	}
	printf("����������: ");
	scanf("%d",&d);
	if(check(y,m,d)==0)
	{
		printf("�������!\n");
		exit(1);
	}
	num = comput(y,m,d);
	printf("��һ������һ��ĵ�%d��\n",num);
}

int check(int y,int m,int d)
{
	if(y%4==0&&y%100!=0)
	{
		flag=1;
	}
	if(m==2)
	{
		if(0<d&&d<29&&(flag==0))
		{	
			return 1;
		}
		if(0<d&&d<30&&(flag==1))
		{
			return 1;
		}
		return 0;
	}
	else
	{
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		{
			if(0<d&&d<32)	
				return 1;
		}
		else
		{
			if(0<d&&d<31)	
				return 1;
		}
		return 0;
	}
}

int comput(int y, int m,int d)
{
	int num=0;
	if(flag==1)
	{
		switch(m)
		{
			case 1:num=d;break;
			case 2:num=31+d;break;
			case 3:num=31+29+d;break;
			case 4:num=31+29+31+d;break;
			case 5:num=31+29+31+30;break;
			case 6:num=31+29+31+30+31+d;break;
			case 7:num=31+29+31+30+31+30+d;break;
			case 8:num=31+29+31+30+31+30+31+d;break;
			case 9:num=31+29+31+30+31+30+31+31+d;break;
			case 10:num=31+29+31+30+31+30+31+31+30+d;break;
			case 11:num=31+29+31+30+31+30+31+31+30+31+d;break;
			case 12:num=31+29+31+30+31+30+31+31+30+31+30+d;break;
		}
		return num;	
	}
	else
	{
		switch(m)
		{
			case 1:num=d;break;
			case 2:num=31+d;break;
			case 3:num=31+28+d;break;
			case 4:num=31+28+31+d;break;
			case 5:num=31+28+31+30;break;
			case 6:num=31+28+31+30+31+d;break;
			case 7:num=31+28+31+30+31+30+d;break;
			case 8:num=31+28+31+30+31+30+31+d;break;
			case 9:num=31+28+31+30+31+30+31+31+d;break;
			case 10:num=31+28+31+30+31+30+31+31+30+d;break;
			case 11:num=31+28+31+30+31+30+31+31+30+31+d;break;
			case 12:num=31+28+31+30+31+30+31+31+30+31+30+d;break;
		}
		return num;
	}
}
			