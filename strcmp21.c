#include<stdio.h>
#include<string.h>
int main(void)
{
	int i;
	char a[100],b[100];
gets(a);
gets(b);
	for(i=0;a[i]!='\0';i++)
	{
	if(a[i]>b[i])
	{
		printf("%s is greater",a);
		break;
	}
	else if(b[i]>a[i])
	{
		printf("%s is greater",b);
		break;
	}
	else if
	{
		printf("both are same");
		break;
	}
	}
	return 0;
}
