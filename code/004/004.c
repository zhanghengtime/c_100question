// 题目：输入某年某月某日，判断这一天是这一年的第几天？

#include<stdio.h>
#include<stdlib.h>

int check(int y,int m,int d); //检查函数
int comput(int y,int m,int num); //计算函数
int flag=0; //闰年标志 闰年置1 非闰年置0

void main()
{
	int y, m,d,num;
	printf("请输入年份: ");
	scanf("%d",&y);
	printf("请输入月份: ");
	scanf("%d",&m);
	if(0>m||12<m)
	{
		printf("输入错误!\n");
		exit(1);
	}
	printf("请输入日数: ");
	scanf("%d",&d);
	if(check(y,m,d)==0)
	{
		printf("输入错误!\n");
		exit(1);
	}
	num = comput(y,m,d);
	printf("这一天是这一年的第%d天\n",num);
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
			