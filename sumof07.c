#include<stdio.h>
int main()
{
	int N,a[100],i,sum=0;
	scanf("%d",&N);
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		sum=sum+a[i];	
	}
	printf("Sum is %d",sum);
	return 0;
}
