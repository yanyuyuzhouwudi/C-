#include <stdio.h>
int main()
{int a,b,c;
printf("���������a��\n");
scanf("%d",&a);
printf("���������b��\n");
scanf("%d",&b);
c=b;
b=a;
a=c;
printf("������");
printf("a=%d\n",a);
printf("b=%d\n",b);
}