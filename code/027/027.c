//题目:利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。

#include<stdio.h>

void print(int i);

void main(void)
{
	int i=5;
	printf("请输入5个字符: ");
	print(i);
	printf("\n");
}

void print(int i)
{
	char next;
	if(i<=1)
	{
		next = getchar();
		printf("相反的方向输出: ");
		putchar(next);
	}
	else 
	{
		next = getchar(); //利用递归进栈来变换顺序
		print(i-1);
		putchar(next);
	}	
}

