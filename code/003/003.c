//题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？

#include<stdio.h>
#include<math.h>

void main(void)
{
	int i,j,c=0; 
	for(i=1;;i++)           //是否存在负数可能
	{ 
		c=0; //标志位
		for(j=1;j<i+168;j++)  //循环条件
		{
			if(i+100==j*j)	
				c++;
			if(i+168==j*j)
				c++;
		}
		if(c==2)
		{
			printf("此数为: %d\n",i);
			break;
		}
	}
}