#include <stdio.h>
int main() 
{
    int a,b,sum=0;
    scanf("%d %d",&a,&b);
    sum=a+b;
    if(sum%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
	return 0;
}
