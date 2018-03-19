#include<stdio.h>
#include<string.h>
int main(void)
{
	int n,s=0,a;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		s=s+a;
		n=n/10;
	}
	printf("%d",s);
	return 0;
}
