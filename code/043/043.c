//��Ŀ: ��n��������ʹ��ǰ�����˳�������m��λ�ã����m���������ǰ���m������

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,m,temp,j;
	int *a;
	printf("��������������: ");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int)*n);
	printf("����������: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("���������λ����: ");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{	
		temp = a[n-1];
		for(j=0;j<n;j++)
		{
			a[n-1-j]=a[n-2-j];
		}
		a[0] = temp;
	}
	printf("����%d��: ",m);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
