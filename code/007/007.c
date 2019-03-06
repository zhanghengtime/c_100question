//题目：输出特殊图案，请在c环境中运行，看一看，Very Beautiful!

#include<stdio.h>

void main(void)
{
	char a=176,b=219;
	printf("%c%c%c%c%c\n",b,a,a,a,b);
	printf("%c%c%c%c%c\n",a,b,a,b,a);
	printf("%c%c%c%c%c\n",a,a,b,a,a);
	printf("%c%c%c%c%c\n",a,b,a,b,a);
	printf("%c%c%c%c%c\n",b,a,a,a,b);
}

/*输出的ascii码被cmd以GBK编码输出了，在cmd里面输入
mode con cp select=437选择英文编码再运行就可以正常显示了
用完了使用mode con cp select=936改回简体中文*/