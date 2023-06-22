// merge numbers without using arithmetic, strings and defined functions

#include <stdio.h>


#define merge(a, b) b##a                //the expression “a##b” prints concatenation of ‘a’ and ‘b’.

int main(){
    printf("%d", merge(18, 52));
    return 0;
}