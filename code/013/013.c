//题目:打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数本身例如：
// 153是一个“水仙花数”，因为153 = 1的三次方+5的三次方+3的三次方。

#include<stdio.h>

void main(void)
{
	int a,b,c,num;
	printf("水仙花数：");
	for(num=100;num<=999;num++)
	{
		a=num/100; //百位
		b=num/10%10; //十位
		c=num%10; //个位
		if((a*a*a+b*b*b+c*c*c)==num)
		{
			printf("%d ",num);
		}
	}
	printf("\n");
}