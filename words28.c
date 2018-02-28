#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,count=0,n;
	scanf("%s",&a);
	n=strlen[a];
	for(i=0;i<n;i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count);
	return 0; 
}
