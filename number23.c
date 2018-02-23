#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,alp=0,num=0,n;
	scanf("%s",&a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	

		if(((a[i]>='a')&&(a[i]<='z'))!!((a[i]>='A')&&(a[i]<='Z')))
                        {
                        	alp=1;
                        }
	            if(0>=a[i]&&0<=a[i])
	            {
	            	num=1;
	            }
	}
	if(alp==1&&num==1)
	{
		printf("yes");
	}
	else
	{
		printf("No");
	}
	return 0;

		

}
