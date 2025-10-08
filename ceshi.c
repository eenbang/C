#include <stdio.h>

int main()
{
	char *to;char *from;
	scanf("%s",from);
	int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
	printf("%s",to);
 } 
