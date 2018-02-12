#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,count=0,b;
	scanf("%s",&a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if((a[i]='a')&&(a[i]='z')||(a[i]='A')&&(a[i]='Z'))
		{
			count++;
		}
	}
	printf("%d",count);
	return 0; 
}
