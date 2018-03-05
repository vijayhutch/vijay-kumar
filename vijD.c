#include<stdio.h>
void main()
{
char str,i,b=0;
printf("enter the word");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='0')
{
b++;
}
}
printf("%d",b+1);
}
