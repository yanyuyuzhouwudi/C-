#include <stdio.h>
int main()
{
	int a,n,i=1,sn=0,tn=0;
	printf("����aΪ��");
	scanf("%d",&a);
	printf("a��λ��nΪ��");
    scanf("%d",&n);
	while (i<=n)
	{
		tn=tn+a;
		sn=sn+a;
		a=a*10;
		++i;
	}
	printf("a+aa+aaa+...=%d\n",sn);
	return 0;
}


