#include <stdio.h>
#include <string.h>
int main()
{
char s[100];
int count=0,i;
printf("\n Enter the sentence:");
scanf("%[^\n]s",&s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
count++;    
}
printf("\n Number of words are: %d",count+1);
return 0;
}
