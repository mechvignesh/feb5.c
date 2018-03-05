#include<stdio.h>
int main()
{
	int b,i,count=0;
	scanf("%d",&b);
	for(i=2;i<b;i++)
	{
		if(b%i==0)
		count++;
	}
	if(count==0)
	printf("Not a Composite number");
	else
	printf("composite number");
	return 0;
}
