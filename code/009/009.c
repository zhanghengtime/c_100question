//要求输出国际象棋棋盘。

#include<stdio.h> 

void main() 
{ 
    int i,j;
    for(i=0;i<8;i++) 
    { 
          for(j=0;j<8;j++)
          { 
                if((i+j)%2==0)printf("%c%c",219,219); 
                else  printf(" "); 
          }
          printf("\n"); 
    } 
}

// 进入cmd 修改为英文再运行