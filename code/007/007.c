//��Ŀ���������ͼ��������c���������У���һ����Very Beautiful!

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

/*�����ascii�뱻cmd��GBK��������ˣ���cmd��������
mode con cp select=437ѡ��Ӣ�ı��������оͿ���������ʾ��
������ʹ��mode con cp select=936�Ļؼ�������*/