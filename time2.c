 #include<stdio.h>
    int main()
    {
   int a,b,c,d,e,f,sa;
   
    	printf("Enter first time: ");
    	scanf("%d%d",&a,&b);
    		printf("Enter second time: ");
    	scanf("%d%d",&c,&d);
    	if(b<d)
    	{
    		a--;
    		b=b+60;
    		
    	}
    
    	e=a-c;
    	f=b-d;
    	printf("%d %d",e,f);
    	return 0;
    	
    	
    }
