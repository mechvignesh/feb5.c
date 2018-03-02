#include<stdio.h>
#include<string.h>
int main()
{
	int i,m,flag=0;
	char a[100];
	scanf("%[^\t]s",&a);
	for(i=0;a!=0;i++)
	{
		m=int(a[i]);
		if(a[i]%2!=0)
		{
			printf("%d\n",a[i]);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("All are even numbers");
	}
	return 0
}
