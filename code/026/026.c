//��Ŀ:���õݹ鷽����5��

#include<stdio.h>

long pi(int n);

void main(void)
{
	int i;
	printf("������һ����: ");
	scanf("%d",&i);
	printf("%d! = %ld\n",i,pi(i));
}

long pi(int i)
{
	if(i<=1)
		return 1;
	return i*pi(i-1);
}
