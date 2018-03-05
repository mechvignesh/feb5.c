#include<stdio.h>
int main()
{
	int a,i,count=0;
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		count++;
	}
	if(count==0)
	printf("Not a Composite number");
	else
	printf("composite number");
	return 0;
}
