#include<stdio.h>
void main( )
{ int z;
  printf("������һ����λ������:\n");
  scanf("%d" , &z);
  printf("���������Ϊ��%d%d%d\n", z%10, z/10%10, z/100);  
      }
