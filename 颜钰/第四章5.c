#include <stdio.h>
#include<math.h>
int main()
 {
	float x , y;
	printf ("������һ��С��1000������:\n");
	scanf ("%f", &x ) ;
	while( x >=1000||x<=0 )  
	{
		printf ("���������룡\n");
		scanf ("%f", &x ) ;
	}
	printf ("�����ֵ�ƽ����Ϊ:");
    y=sqrt(x);
	printf("%.0f\n", y);
	return 0;
}
