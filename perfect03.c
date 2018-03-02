#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=a*b;
	printf("%d\n",c);
	if(a==b)
	{
		printf("Perfect square");
	}
	else
	{
		printf("Not a perfect square");
	}
	return 0;
}
