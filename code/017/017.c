//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����

#include<stdio.h>

void main(void)
{
	char s[30],*p;
	int j=0,k=0,z=0,g=0;
	p=s;
	printf("������һ���ַ�: ");
	gets(p);  //��gets��֤��������ո�
	for(;*p!='\0';p++)
	{
		if((('a'<=*p)&&(*p<='z'))||(('A'<=*p)&&(*p<='Z')))
		{
			j++;
		}
		else if(*p==' ')
		{
			k++;
		}
		else if(('0'<=*p)&&(*p<='9'))
		{
			z++;
		}
		else 
		{
			g++;
		}
	}
	printf("��ĸ: %d  ���� %d  �ո� %d  �������� %d\n",j,z,k,g);
}