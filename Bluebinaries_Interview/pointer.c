#include<stdio.h>

int main(){
    int a = 10;
    int b = 19;
    unsigned char *p = (char*) &a;
    printf("%p\n", p);
    p++;
    printf("%p\n", p);
    unsigned char g = b;
    printf("%d", g);
    return 0;
}