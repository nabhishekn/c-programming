#include <stdio.h>

#define MAX(x,y) ((x>y)?x:y)

int main()
{
    int a=20, b=30, max;
    max = MAX(a,b);

    int i;
    for (i=0; i<10; ++i){
    printf("%d\n", max);
    }
return 0;
}