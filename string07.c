#include<stdio.h>
int main()
{
char a;
printf("Enter the number: ");
scanf("%c",&a);
if(a>='1'&&a<='9')
{
printf("Yes");
}
else
{
printf("No");
}
return 0;
}
