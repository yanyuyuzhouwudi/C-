#include <stdio.h>
int main ()
{
	double h=100,h1=h/2;
    int n;
	for(n=2;n<=10;n++)
	{
		h=h+2*h1;
		h1=h1/2;
	}
	printf("��10�����ʱ������%f��\n",h);
	printf("��10�η���%f��\n",h1);
	return 0;
}
