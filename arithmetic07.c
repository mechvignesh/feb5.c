#include<stdio.h>
int main()
{
int sum=0,a,b,n,i;
scanf("%d%d%d",&n,&a,&b);
for(i=1;i<=n;i++)
{
sum=sum+a;
a=a+b;
}
printf("%d",sum);
return 0;
}
