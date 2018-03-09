#include<stdio.h>
int main()
{
int a,b[3],small,j;
printf("Enter the number of elements: ");
scanf("%d",&a);
printf("Enter the array elements: ");
for(j=1;j<=a;j++)
{
scanf("%d\n",b[j]);
}
small=b[0];
for(j=1;j<=a;j++)
{
if(b[j]<small)
{
small=b[j];
}
}
printf("Largest in array is %d",small);
return 0;
}
