#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("Enter the number:");
scanf("%d",&a);
b=a/100;
c=(a-(b*100))/10;
d=a-((b*100)+(c*10));
e=(d*100)+(c*10)+b;
if(a=e)
{

printf("Yes");
}
else
{
printf("No");
}
return 0;
}
