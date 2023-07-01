#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char S1[100];
    int len, i, ch;

    printf("Enter string: ");
    gets(S1);
    printf("String before reverse: %s", S1);

    len = strlen(S1);

    for(i=0; i<len/2; i++)
    {
        ch=S1[i];
        S1[i]=S1[len-1-i];
        S1[i]=ch;
    }

    printf("\nString after reverse: %s\n", S1);
    printf("String length is:%d", len);
}