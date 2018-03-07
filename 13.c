#include<stdio.h>
int main()
{
int a,b,*c,*d;
scanf("%d%d"&a,&b);
c=&a;
d=&b;
printf("the value is %d %d",*c,*d);
return 0;
}

