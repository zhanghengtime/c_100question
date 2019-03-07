//题目:两个乒乓球队进行比赛，各出三人。甲队为A，B，C三人，乙队为X，Y，Z三人。已抽签决定比赛名单。
//有人向队员打听比赛的名单.A说他不和X比，C说他不和X，Z比，请编程序找出三队赛手的名单。

#include<stdio.h>
#include<stdlib.h>

void main(void) //用三重循环
{
	int i,j,k;
	for(i='a';i<='c';i++)
	{
		for(j='a';j<='c';j++)
		{
			for(k='a';k<='a';k++)
			{
				if(i!=j&&j!=k&&i!=k) 
				{
					if(i!='a'&&k!='c'&&i!='c') //条件
						printf("x--%c, y--%c, z--%c\n",i,j,k);
				}
			}
		}
	}
}