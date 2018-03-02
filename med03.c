#include<stdio.h>
#include<string.h>
int main()
{
	char b[100];
	int m;
	scanf("%s",&b);
	m=strlen(b);
	if(m%2==0)
	{
		b[m/2]='*';
		b[(m/2)-1='*'];
	}
	else
	{
		b[m/2]='*';
	}
	printf("%s",b);
	return 0;
}
