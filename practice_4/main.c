#include <stdio.h>

struct mystruct{
    float a;
    int b;
    char c;
    int d;
};

union myunion{
    int a;
    int c;
    char d;
};

int main()
{
    struct mystruct mystruct1;
    union myunion myunion1;
    
    myunion1.a = 0x1234;
    
    mystruct1.a = 3.4;
    mystruct1.b = 100;
    
    printf("size of the structure:%ld\n", sizeof(mystruct1));
    printf("size of the myunion1:%ld\n", sizeof(myunion1));
    printf("print c %x\n", myunion1.c);               //value of c -- used %x because value of int a is hexadecimal
    printf("print d %c", myunion1.d);                 //value of d -- used %c value od
    
    return 0;
}
