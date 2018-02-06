#include<stdio.h>
int main()
{
int N,i,a;
printf("Enter the number:");
scanf("%d",&N);
for(i=1;i<=5;i++)
{
	a=N*i;
	printf("%d\n",a);
}

return 0;
}
