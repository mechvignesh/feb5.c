#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int b,i;
	scanf("%s",&a);
	b=strlen(a);
	for(i=0;i<=b;i++)
	{
		if(i%2==0)
		{
			printf("%c",a[i]);
		}
	}
	printf("\t");
	for(i=0;i<=b;i++)
	{
	if(i%2!=0)
	{
		printf("%c",a[i]);
	}
	}
	return 0;
}
