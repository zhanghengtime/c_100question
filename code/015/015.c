//利用条件运算符的嵌套来完成此题：学习成绩> = 90分的同学用甲表示，60-89分之间的用乙表示，60分以下的用丙表示。

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int num;
	printf("请输入成绩: ");
	scanf("%d",&num);
	if(num>100||num<0)
	{
		printf("error!\n");
		exit(1);
	}
	if(num>=90)
		printf("成绩为甲!\n");
	else if(60<=num&&num<=89)
	{
		printf("成绩为乙!\n");
	}
	else
	{
		printf("成绩为丙!\n");
	}
}