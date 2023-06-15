#include <stdio.h>
//strinzing operator - # in preprocessor directives this operator use to convert argument into string 
#define printDebug(x) printf("The value of \"%s\" is %d\n", #x, x);

int main(){
    int value1 = 1;
    int value2 = 2;

    printDebug(value1);
    printDebug(value2);

    return 0;
}