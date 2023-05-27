#include <stdio.h>

int fact(int n)
{
    if(n>=1){
        return n*fact(n-1);
    }else{
        return 1;
    }
}

int fibonacci(int i)
{
    if(i==0){
        return 0;
    }
    if(i==1){
        return 1;
    }
    return (fibonacci(i-1)+fibonacci(i-2));
}


int main()
{
    int n = 5;
    int i;
    printf("%d\n", fact(n));
    for(i = 0; i<n; i++ )
    {
        printf("%d\t", fibonacci(i));
    }
    return 0;
}