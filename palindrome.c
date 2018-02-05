#include<stdio.h>
void main()
{
int a,b,c,d,e;
printf("Enter the three digit number:");
scanf("%d",&a);
b=a/100;
c=(a-(b*100))/10;
d=a-((b*100)+(c*10));
e=b+c+d;
if(a=e)
printf("Palindrome ");
else
printf("Not a palindrome");
}
