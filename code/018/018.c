//求S = A + AA + AAA + AAAA + AA ...一个的值，其中一个是一个数字。
//例如2 + 22 + 222 + 2222 + 22222（此时共有5个数相加），几个数相加有键盘控制。

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int i,k,j,sum=0,num=0;
	printf("请输入需要相加数字的个数: ");
	scanf("%d",&i);
	if(i<1)
	{
		printf("error!\n");  //异常输入处理
		exit(1);
	}
	printf("请输入需要相加的数: ");
	scanf("%d",&k);
	for(j=1;j<=i;j++)
	{
		num=num*10+k;
		sum = num +sum;
		printf("%d",num);
		if(j!=i)
		{
			printf(" + ");
		}
	}
	printf(" = %d\n",sum);
}
