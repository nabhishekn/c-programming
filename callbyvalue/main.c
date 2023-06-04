#include <stdio.h>

int swap(int, int);

int main(){
    int a=20, b=10;

    swap(a, b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}

int swap(int a, int b){
    int t;
    t = a;
    a = b;
    b = t;
    printf("a=%d, b=%d\n", a, b);
}