#include<stdio.h>
int main()
{
	float a,b,c;
	scanf("%f",&a);
	printf("Length of the farm is: %f\n",a);
	scanf("%f",&b);
	printf("Breadth of the farm is: %f\n",b);
	c=a*b;
	printf("Area is %.5f",c);
	return 0;
}
