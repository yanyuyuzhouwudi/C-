#include<stdio.h>
int main()
{int i,j,min,temp,a[11];
  printf("������10������:\n");
  for(i=1;i<=10;i++)
  {
   printf("a[%d]=",i);
   scanf("%d",&a[i]);
  }
  printf("ԭʼ����Ϊ:\n");
  for(i=1;i<=10;i++)
	  printf("%d  ",a[i]);
  printf("\n");
  for(i=1;i<=9;i++)
  {
	min=i;
    for(j=i+1;j<=10;j++)
	if(a[min]>a[j]) min=j;
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;
  }
  printf("\n����������Ϊ:\n");
  for(i=1;i<=10;i++)
	  printf("%d  ",a[i]);
  printf("\n");
  }
