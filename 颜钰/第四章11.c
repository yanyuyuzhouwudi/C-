#include <stdio.h>
int main()
{
    int a[4],i,j;
    for(i = 0; i < 4; i ++)
        {
		printf("�������%d�����֣�\n",i+1);
        scanf("%d",&a[i]);
		} 
    for(i = 0; i < 3; i ++)
        for(j = i+1; j < 4; j ++)
        {
            int t;
            if(a[i]>a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    printf("���ĸ����ְ���С�������е�˳��Ϊ��");
    for(i = 0; i < 4; i ++)
    printf("%d ",a[i]);
}
