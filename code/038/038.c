//��Ŀ:��һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�

#include<stdio.h>

void main()
{
	int a[8]={2,3,4,5,6,7,8};
	int x,i,j;
	printf("ԭ����Ϊ: ");
	for(i=0;i<7;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n������һ��Ҫ�������: ");
	scanf("%d",&x);
	if(x>a[6])
	{
		a[7]=x;
	}
	else
	{
		for(i=0;i<7;i++)
		{
			if(a[i]>x)
			{
				for(j=7;j>i;j--)
				{
					a[j]=a[j-1]; //����
				}
				a[i]=x;
				break;
			}
		}
	}
	printf("���������Ϊ: ");
	for(i=0;i<8;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

