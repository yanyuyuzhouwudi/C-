#include<stdio.h>
int main()
{
  int a[5],i,temp;
      printf("�������������:\n");
  for(i=0;i<5;i++)
	  scanf("%d",&a[i]);
      printf("ԭ��˳��\n");
  for(i=0;i<5;i++)
	  printf("%d  ",a[i]);
  for(i=0;i<5/2;i++)
  {
    temp=a[i];
    a[i]=a[5-i-1];
    a[5-i-1]=temp;
  }
      printf("\n������˳��\n");
  for(i=0;i<5;i++)
      printf("%d  ",a[i]);
     
}




  