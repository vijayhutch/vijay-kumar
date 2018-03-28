
#include <stdio.h>
int main() 
{
    int a,i,count=0;
    scanf("%d",&a);
    for(i=2;i<=(a/2);i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("yes...prime");
    }
    else
    {
        printf("no");
    }
	return 0;
}
