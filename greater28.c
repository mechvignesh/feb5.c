#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int p=2;
	while(p<n)
	{
		p<<=2;
	}
	printf("%d",p);
	return 0;
}
