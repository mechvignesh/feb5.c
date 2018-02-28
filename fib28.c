#include<stdio.h>
int main()
{
	int n,first=0,second=1,next,i;
	scanf("%d",&n);
for(i=1;i<=a;i++)
{
	if(i<=1)
	next=i;
	else
	{
		next=first+second;
		first=second;
		second=next;
	}
	printf("%d ",next);
}

return 0;
}
