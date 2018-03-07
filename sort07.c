#include <stdio.h>

int main() 
{
	char b[10];
	int n,i;
	scanf("%s",b);
	n=strlen(b);
	for(i=n-1;i>=0;i--)
	{
		printf("%c",b[i]);
	}
	
	return 0;
}
