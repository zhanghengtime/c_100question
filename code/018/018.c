//��S = A + AA + AAA + AAAA + AA ...һ����ֵ������һ����һ�����֡�
//����2 + 22 + 222 + 2222 + 22222����ʱ����5������ӣ�������������м��̿��ơ�

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int i,k,j,sum=0,num=0;
	printf("��������Ҫ������ֵĸ���: ");
	scanf("%d",&i);
	if(i<1)
	{
		printf("error!\n");  //�쳣���봦��
		exit(1);
	}
	printf("��������Ҫ��ӵ���: ");
	scanf("%d",&k);
	for(j=1;j<=i;j++)
	{
		num=num*10+k;
		sum = num +sum;
		printf("%d",num);
		if(j!=i)
		{
			printf(" + ");
		}
	}
	printf(" = %d\n",sum);
}
