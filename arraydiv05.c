#include <stdio.h>

int main(void) {
	int a[10],b[10],c[10];
	int j;
	for(j=0;j<4;j++)
	{
		scanf("%d %d",&a[j],&b[j]);
		if(j%2==0)
		c[j]=a[j]/b[j];
		else
		c[j]=a[j]%b[j];
	}
	for(j=0;j<4;j++)
	{
		printf("\n%d",c[j]);
	}
	return 0;
}
