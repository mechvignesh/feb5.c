#include<stdio.h>
#include<string.h>
int main()
{
	char x[50],y[50],i,j;
	scanf("%s",&x);
	scanf("%s",&y);
	for(i=0;x[i]!='\0';++i)
	{
		for(i=0;y[j]!='\0';++j,++i)
		{
			x[i]=y[j];
		}
		x[i]='\0';
	}
	printf("%s",x);
  return 0;
  getch();
}
