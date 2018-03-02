#include<stdio.h>
int main()
{
	int N,L,R;
	scanf("%d %d %d",&N,&L,&R);
	if(N>=L && N<=R)
	{
		printf("Yes");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
