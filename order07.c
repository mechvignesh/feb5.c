#include<stdio.h>
#include<string.h>
int main()
{
      char x[100];
      int N,m,i;
      scanf("%d",&N);
      scanf("%s",&x);
      m=strlen(x);
      for(i=N;i<m;i++)
      {
       printf("%c",x[i]); 	
      }
      return 0;
      
}
