#include<stdio.h>
int main()
{
int i,b,c,d,e=0;
printf("\n Enter the range....");
scanf("%d%d",&b,&c);
for (i=b;i<=c;i++)
{
     for(d=2; d<=i/2; ++d)
{
if(i%d==0)
        {
            e=1;
            break;
        }
}

    if (e==0)
printf("\n%d",i);
}
return 0;
}
