#include<stdio.h>
void main()
{
int n,a[100],sum=1,av,i;
printf("enter the limit");
scanf("%d",&n);
printf("enter the number");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("av is");
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
printf("%d",av);
}
