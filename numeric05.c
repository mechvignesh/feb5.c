#include<stdio.h>
#include<string.h>
int main()
{
	char h[100];
	int i;
	scanf("%s",&h);
	for(i=0;h!=0;i++)
	{
	  if(h[i]>='0' && h[i]<='9')
	  {
	  	printf("%s ",h[i]);
	  }
	}
	return 0;
}
