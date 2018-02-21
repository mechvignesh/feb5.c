#include<stdio.h>
int main()
{
	int a,b,c;

	scanf("%d%d",&a,&b);
	printf("Range: %d,%d\n",a,b);
	scanf("%d",&c);
	if(c>=a&&c<=b)
	printf("yes");
	else
	printf("no");
	return 0;
}
