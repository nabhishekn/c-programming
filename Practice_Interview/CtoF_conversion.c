#include <stdio.h>

int main()
{
    int c;
    printf("Enter temp in C:");
    scanf("%d", &c);

    float f = ((9*c)/5)+32;
    printf("Temp in F:%f", f);

    return 0;
}