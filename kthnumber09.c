#include<stdio.h>
int main()
{
	int a[100],b,i,flag=0;
	for(i=0;i<10;i++)
	{
	scanf("%d",&a);
	}
	scanf("%d",b);
	for(i=0;i<10;i++)
	{
	   if(a[i]==b)
	   {
	   	flag=1;
	   	printf("%d",a[i]);
	   	break;
	   }
	}
	if(flag==0)
	{
		printf("No");
	}
	return 0;
}
