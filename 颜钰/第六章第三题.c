#include<stdio.h>
int main()
{
  int a[3][3],sum=0;
  int i,j;
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
	{
      printf("��%d�е�%d�е�����Ϊ��",i+1,j+1);
	  scanf("%3d",&a[i][j]);
	}
    for(i=0;i<3;i++)
	sum=sum+a[i][i];
	printf("�Խ���Ԫ��֮��Ϊ%6d\n",sum);
}