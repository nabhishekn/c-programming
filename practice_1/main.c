#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
struct mystruct{
    char a;
    char b;
    int d;
};


int main()
{
    struct mystruct mystruct1;
    mystruct1.d = 2;
    printf("%d\n", mystruct1.d);

    int *p = (int*)malloc(sizeof(int));
    printf("%lu\n", sizeof(p));
    p=NULL;
    printf("%lu\n", sizeof(p));
    free(p);
    printf("%lu\n", sizeof(p));
    printf("%lu\n", sizeof(mystruct1));
}