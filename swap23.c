#include<stdio.h>
int main()
{
	int a,b,swap;
	scanf("%d%d",&a,&b);
	swap=a;
	a=b;
	b=swap;
	printf("%d %d",a,b);
	return 0;
}
