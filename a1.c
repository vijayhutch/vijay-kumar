
#include <stdio.h>
int main() 
{
	int c,temp=0,count=0,i;
	scanf("%d",&n);
    while(n!='\0')
    {  
        temp=n%10;
        count++;
        c=c/10;
    }
    printf("%d",count);
	return 0;
}
