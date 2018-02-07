#include<stdio.h>
int main()
{
int N,a[100],i;
printf("Enter the number of elements:\n ");
scanf("%d",&N);
printf("Array elements are:\n ");
for(i=0;i<N;i++)
{
scanf("%d\n");
}
for(i=0;i<N;i++)
{
printf("\n%d \t%d",a[i],i);
return 0;
}
