//��Ŀ����1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�

//����һ
#include<stdio.h>

void main(void)
{
	int i,j,k,num,sum=0;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			for(k=1;k<=4;k++)
			{
				if(i!=j&&k!=i&&j!=k)
				{
					num = i*100+j*10+k; 
					printf("%d ",num);
					sum++;
				}
			}
		}
	}
	printf("\n����Ϊ: %d\n",sum);
}





/*������
#include<stdio.h>

int check(int n);

void main(void)
{
	int a,b,c,num,i=0;
	for(num=100;num<1000;num++)
	{
		a = num/100;
		b = num/10%10;
		c = num%10;
		if(a!=b&&b!=c&&a!=c)
		{
			if(check(a)+check(b)+check(c)>=3)
			{
				printf("%d ",num);
				i++;
			}
		}
	}
	printf("\n����Ϊ: %d\n",i);
}

int check(int n)
{
	if(1<=n&&n<=4)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}*/



