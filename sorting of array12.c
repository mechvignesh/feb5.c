#include<stdio.h>
int main()
{
	int a,b[100],i,j,n;
	printf("Enter the digits:");
	scanf("%d",&n);
	printf("Array elements ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		
	}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(b[i]>b[j])
		{
			a=b[j];
			b[j]=b[i];
			b[i]=a;
		}
	}
}
for(i=0;i<n;i++)
printf("%d",b[i]);
return 0;
}
