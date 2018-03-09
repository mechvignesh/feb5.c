#include<stdio.h>
int main()
{
	int a[100];
	int i,m,count=0;
	scanf("%d",&a);
	m=strlen(a);
	for(i=0;i<=m;i++)
	{
	  if(a[i]>='0'&&a[i]<='9')
	  count++;
	}
	printf("%d",count);
	return 0;
	}
