#include <stdio.h>

int factorial(int n)
{
    if (n>=1){
        return n*factorial(n-1);
    }else{
            return 1;
            }
}

int main()
{
    int n = 3;
    printf("%d", factorial(n));
    return 0;
}