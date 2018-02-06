#include<stdio.h>
    int main()
    {
    	int a,b,c,d,e=0,i;
    	printf("Enter the limits:");
    	scanf("%d%d",&a,&b);
     
    	for(i=a;i<=b;i++)
    	{
    		c=i;
    		d=0;
    	while(c>0)
    	{
    	d=c%10;
    	c=c/10;
    	e=e+(c*c*c);
    	}
    	if(e==i)
    	{
    		printf("\n%d",i);
    	}
    	}
    return 0;
     
    	}
