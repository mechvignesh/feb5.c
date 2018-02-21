#include<stdio.h>
int main()
{
	int a,b[100],large,small,i;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
		
	}
	large=b[0];
	for(i=0;i<a;i++)
	{
	if(b[i]>large)
	{
		large=b[i];
	}

	}
		printf("Large %d\n",large);
	small=b[0];
	for(i=0;i<a;i++)
	{
		if(b[i]<small)
		{
			small=b[i];
		}
	
	}
		printf("small %d",small);
	return 0;
}
