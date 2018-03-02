#include<stdio.h>
int main()
{
	int i,j,flag=0,n;
	char a[100];
	scanf("%d",&a);
	n=strlen(a);
	for(i=0,j=n-1;i<=n/2;i++,j--)
	{
	      if(a[i]!=a[j])
	      {
	      	printf("Not a palindrome");
	      	flag=1;
	      	break;
	      }
	}
	if(flag==0)
	{
		printf("Palindrome");
		
	}
	return 0;
}
