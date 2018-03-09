#include <stdio.h>

int main(void) {
	int n,a,i,product=1;
	scanf("%d",&n);
	for(i=1;n!='\0';i++)
	{
		a=n%10;
		product=product*a;
		n=n/10;
	}
	printf("%d",product);
	return 0;
}
