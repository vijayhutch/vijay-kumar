#include<stdio.h>
int main()
{
	int b,p,sum,i;
	scanf("%d %d",&b,&p);
	for(i=1;i<=p;i++)
	{
		sum=sum*b;
	}
	printf("%d",sum);
  getch();
	return 0;
}
