#include<stdio.h>
void main( )
{ float  a, b, c, big ;
  printf("���������a:\n");
  scanf("%f" , &a);
  printf("���������b:\n");
  scanf("%f" , &b);
  printf("���������c:\n");
  scanf("%f" , &c);
  big=a ;
  if (b>big) big=b;
  if (c>big) big=c;
  printf("�������: %.2f\n", big); 
      }
