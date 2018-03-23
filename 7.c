#include <stdio.h>
int main(void) {
    int b[10],i,largest;
    for(i=0;i<10;i++)
    scanf("%d",&b[i]);
    for(i=0;i<10;i++)
    printf("%d\n",b[i]);
    largest=b[0];
    for(i=0;i<10;i++)
    if(b[i]>largest)
    largest=b[i];
    printf("%d is the largest number",largest);
	return 0;
}
