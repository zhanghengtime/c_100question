//��Ŀ: ��������������M��N���������Լ������С��������

#include<stdio.h>

int gong(int m,int n); //�����Լ������
int bei(int m,int n); //����С����������

void main()
{
	int m,n;
	printf("����������������: ");
	scanf("%d %d",&m,&n);
	printf("���Լ��Ϊ: %d\n",gong(m,n));
	printf("��С������Ϊ: %d\n",bei(m,n));
}

int gong(int m,int n)
{
	int i,temp;
	if(m>=n)
	{
		temp=m;
		m=n;
		n=temp;
	}
	for(i=m;i>=1;i--)
	{
		if(m%i==0&&n%i==0)
		{
			return i;
		}
	}
	return 1;
}

int bei(int m,int n)
{
	int i,temp;
	if(m>=n)
	{
		temp=m;
		m=n;
		n=temp;
	}
	for(i=n;i<=m*n;i++)
	{
		if(i%n==0&&i%m==0)
			return  i;
	}
	return m*n;
}

