//��һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�

#include<stdio.h>

void main()
{
	int x,i;
	printf("������һ��������5λ��������: ");
	scanf("%d",&x);
	for(i=1;;i++)
	{
		if(x/10>=1)
		{
			printf("%d ",x%10);
			x=x/10;
		}
		else
		{
			printf("%d",x);
			break;
	    }
	}
	printf("\nһ����%dλ��!",i);
	printf("\n");
}
