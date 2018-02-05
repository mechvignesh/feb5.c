#include<stdio.h>
int main()
{
int a,f=1,n;
printf("\nEnter the number");
scanf("%d",&n);
for(a=1;a<=n;a++)
f=f*a;
printf("\nFactorial os %d is :%d",n,f);
return 0;
}
