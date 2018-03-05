#include <stdio.h>
int main()
{
	int a[10],b[10],c[10];
	int n,i,j;
	scanf("%d",&n);
	printf("enter the number of ninja warriors: %d",n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		c[i]=b[i]-a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",c[i]);
	}
	return 0;
}
