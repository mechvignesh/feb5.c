#include<stdio.h>
int main()
{
	int a,n;
	scanf("%d %d",&a,&n);
a=a^n;
n=a^n;
a=a^n;
printf("%d %d",a,n);
return 0;
}
