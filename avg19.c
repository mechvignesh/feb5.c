#include<stdio.h>
int main()
{
	int a,b[100],avg,sum=0,i;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<a;i++)
	{
		sum=sum+b[i];
	}
	avg=sum/a;
	printf("%d",avg);
	return 0;
}
