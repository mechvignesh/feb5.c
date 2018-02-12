#include<stdio.h>
int main()
{
	int a[10],i,large;
for(i=0;i<10;i++)
{
	scanf("%d",&a[i]);
}
a[0]=large;
for(i=0;i<10;i++)
{
	if(a[i]>large)
	{
	large=a[i];
	}
}
printf("%d",large);
return 0;
}
