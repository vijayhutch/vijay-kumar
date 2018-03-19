#include <stdio.h>

int main(void) 
{
	int n,r,re=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=num%10;
		re=(re*10)+r;
		n=n/10;
	}
	n=r;
	while(n!=0)
	{
		r=n%10;
		printf("%d ",re);
		n=n/10;
	}
	return 0;

}
