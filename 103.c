#include <stdio.h>
#include<string.h>
int main() 
{
	char b[100];
	int i,n,count=0,countt=0,count1=0;
	scanf("%s",b);
	n=strlen(b);
	for(i=0;i<n;i++)
	{
	    if((b[i]>='b')&&(b[i]<='z')||(b[i]>='A')&&(b[i]<='Z'))
	    {
	       count=1;
	    }
	    else if((b[i]>=0)&&(b[i]>=9))
	    {
	        countt=1;
	    }
	    else
	    {
	        count1=1;
	    }
	}
	if((count==1)&&(countt==1))
	{
	    printf("yes..string contains both alphabets and numbers");
	}
	else
	{
	    printf("no");
	}
	return 0;
}
