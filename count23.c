#include<stdio.h>
#include<string.h>
int main()
{
	int i,sum=0,a,rem;
 
	scanf("%d",&a);
while(a!='\0')
	{
	  rem=a%10;
	  sum=sum+rem;
	  a=a/10;
	}
	printf("%d",sum);
	return 0;
}
