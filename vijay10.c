#include<stdio.h>
#include<string.h>
int main()
{
	int a;
	scanf("%d",&a);
	int count=0;
	while(a!=0)
	{
            a=a/10;
            count++;
	}
     printf("%d",count);
     getch();
     return 0;
}
