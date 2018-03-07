#include <stdio.h>

int main() 
{
	char x[10];
	int n,i;
	scanf("%s",x);
	n=strlen(x);
	for(i=n-1;i>=0;i--)
	{
		printf("%c",x[i]);
	}
	
	return 0;
}
