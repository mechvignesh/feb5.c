#include<stdio.h>
int main()
{
	int a[100],i,small;
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
	}
small=a[i];
for(i=0;i<10;i++)
{
	if(a[i]<small)
	{
	 small=a[i];
	}
	printf("%d  ",small);
}
return 0;
}
