#include <stdio.h>
int main()
{
	int m,n,a,b,temp,p;
	printf("�������һ��������m��");
	scanf("%d",&m);
	printf("������ڶ���������n��");
	scanf("%d",&n);
	if(m<n)
	{
		temp=m;
	    m=n;
	    n=temp;
	}
    p=m*n;
    while(n!=0)
	{
        a=m%n;
		m=n;
		n=a;
	}
	printf("���ǵ����Լ��Ϊ��%d\n",m);
    printf("���ǵ���С������Ϊ��%d\n",p/m);
	return 0;
}