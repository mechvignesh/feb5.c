#include<stdio.h>
int main()
{
	int a[100],i,j,n,k;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]%2!=0)
				printf("%d",a[j]);
				break;
			}
		}
		break;
	}
	return 0;
	
}
