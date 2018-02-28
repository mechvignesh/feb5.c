#include <stdio.h>
#include<string.h>
int main(void)
{
	char b[10];
	scanf("%[^\t]s",b);

	int i,flag=0,m;
	m=strlen(b);
	for(i=0;i<m;i++)
	{
		if(b[i]=='1' || b[i]=='0')
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
		
	}
	if(flag==1)
	{
		printf("yes");
	}
	
}
