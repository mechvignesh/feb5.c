#include<stdio.h>
void main()
{
int a,b,c,i,n=0;
scanf("%d",&a);
b=a/2;
for(i=2;i<=b;i++)
{
if(a%i==0)
{
n=1;
break;
}
}
if(n==0)
printf("YES");
else
printf("NO");
}
