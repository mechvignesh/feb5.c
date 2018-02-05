#include<stdio.h>
int main()
{
int a,b,i;
printf("Enter the first limit:");
scanf("%d",&a);
printf("Enter the second limit:");
scanf("%d",&b);
printf("\nThe even numbers between %d and %d are  ",a,b);
for(i=a;i<=b;i++)
{
if((i%2)==0)
{
printf("%d\n",i);
}
}
return 0;
}
