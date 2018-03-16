#include<stdio.h>
int main()
{
	int long long factorial=1;
	int a,i;
	scanf("%d",&a);
	if(a<0)
	printf("Factorial of negative number doesn't exist");
	if(a>0)
	{
	for(i=1;i<=a;++i)
	{
		factorial=factorial*i;
	}
	printf("%d",factorial);
	}
	return 0;
}
