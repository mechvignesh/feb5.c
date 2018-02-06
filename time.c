#include<stdio.h>
    int main()
    {
    	int a,b,c;
    	printf("Total minutes: ");
    	scanf("%d",&a);
    	b=a/60;
    	c=a-(b*60);
    printf(" %d hours %d minutes",b,c);
    return 0;
    }
