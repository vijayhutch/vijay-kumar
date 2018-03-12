#include <stdio.h>
#include<con io.h>

int main()
{
	int n,i, a=1,b=1,c=3;
	scanf("%d",&n);
	printf("%d%d",a,b);
	for(i=1;i<n-1;i++)
	{
		
		c=a+b;
		printf("\n%d",c);
	}
	return 0;
}
