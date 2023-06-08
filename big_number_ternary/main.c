/******************************************************************************
This is the code to find large number in given 3 numbers.
Using ternary operator macro.
*******************************************************************************/
#include <stdio.h>

//macro to find large number using ternary operator
#define MAX (a > b ? ( a > c ? a : c) : (b > c ? b : c)) 

int main()
{
    int a, b, c;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);
    printf("%d is big number", MAX);
    return 0;    
}
