
#include<stdio.h>
void main()
{
char str[100]="10011";
int a;
for(a=0;str[a]!='\0';a++)
{
if((str[a]=0)||(str[a]=1))
{
printf("binary number");
}
else
{
printf("alphabet");
}
}
}
