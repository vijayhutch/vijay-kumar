
#include <stdio.h>

int main(void) 
{
	int array[20];
	int n,i,max=array[0];
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("\n enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\nthe maximum of the numbers is:%d",max);
	return 0;
}
