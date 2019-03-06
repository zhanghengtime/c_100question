//古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，
//假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）


#include<stdio.h>  //斐波拉契数列 递归形式 fac(n-1)+fac(n-2)

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
#include<stdio.h>  //非递归实现 运行速度明显提升

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



