#include<stdio.h>
int main()
{
	int a,n,i,d,total=0;
	scanf("%d%d%d",&a,&d,&n);
	for(i=0;i<n;i++)
    {
        total=total+(a+i*d);
    }
    printf("%d",total);
    return 0;
}
