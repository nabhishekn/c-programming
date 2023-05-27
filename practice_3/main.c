#include <stdio.h>
#include "add.h"


int fun()
{
    static int count = 10;
    count ++;
    return count ;
}

int main()
{
    printf("%d\t", fun());
    printf("%d\t", fun());
    printf("%d\t", fun());

    int sum = add(4, 5);

    printf("%d\t", sum);
    return 0;
}