//��Ŀ:һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6 = 1 + 2 + 3.����ҳ�1000���ڵ�����������
// 28 = 1 + 2 + 4 + 7 + 14
#include<stdio.h>

void main(void)
{
	int i,j,num;
	printf("����: ");
	for(i=2;i<=1000;i++)
	{
		num=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
				num=num+j;
		}
		if(num==i)
			printf("%d ",i);
	}
	printf("\n");
}
	
