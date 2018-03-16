#include<stdio.h>
int main()
{
int j,b,c,d,e=0;
printf("\n Enter the range....");
scanf("%d%d",&b,&c);
for (j=b;j<=c;j++)
{
     for(d=2; d<=j/2; ++d)
{
if(j%d==0)
        {
            e=1;
            break;
        }
}

    if (e==0)
printf("\n%d",j);
}
return 0;
}
