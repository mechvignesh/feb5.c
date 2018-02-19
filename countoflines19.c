#include <stdio.h>
#include <string.h>
int main()
{
char s[100];
int count=0,i;
printf("\n paragraph:");
scanf("%[^\n]s",&s);
for(i=1;s[i]!='\0';i++)
{
if(s[i]=='.')
count++;    
}
printf("\n Number of lines are: %d",count);
return 0;
}
