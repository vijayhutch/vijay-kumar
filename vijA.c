#include<stdio.h>
#include<string.h>
void main()
{
Char i = 0, l = 0, f = 1;
puts("Enter any string\n");
gets(str);
for(i = 0;str[i]!='\0';i++)
{
l = l + 1;
}
printf("The number of characters in the string are %d\n", l);
  return 0;
}
