#include<stdio.h>
int main()
{
	int a,b[100],median,i,j;
	scanf("%d",&a);
	printf("\n array elements are ");
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<i;j++)
		{
			median=b[j];
			b[j]=b[i];
			b[i]=median;
		}
	}
	printf("%d",b[j/2]);
	return 0;
}
