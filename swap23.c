#include<stdio.h>
int main()
{
	int a,y,swap;
	scanf("%d%d",&a,&y);
	swap=a;
	a=y;
	y=swap;
	printf("%d %d",a,y);
	return 0;
}
