#include<stdio.h>
int main()
{
	int n,k,i,a[100],small;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	small=a[0];
	for(i=0;i<n;i++)
	{
		if(i<=k)
		{
		if(a[i]<small)
		{
			small=a[i];
		}
		}
	}
	printf("%d",small);
	return 0;
}
