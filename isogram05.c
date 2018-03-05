#include <stdio.h>

int main(void) 
{
	char a[10];
	int i,flag=0,k;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		for(k=i+1;a[k]!=0;k++)
		{
			if(a[i]==a[k])
			{
				printf("no");
				flag=1;
				break;
			}
		}
		if(flag==1)
		break;
	}

if(flag==0)
{
	printf("yes");
}
	return 0;
}
