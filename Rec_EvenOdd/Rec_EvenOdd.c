#include <stdio.h>

int EvenOdd(int stVal, int n);

int main(){

    int n;
    printf("ENter number to find 1: ");
    scanf("%d", &n);
    printf("\n All even numbers from 1 to %d are : ", n);
    EvenOdd(2, n);

    printf("\n All odd numbers from 1 to %d are : ", n);
    EvenOdd(1, n);

    printf("\n\n");

    return 0;
}

int EvenOdd(int stVal, int n){
    if(stVal > n)
    return 0;
    printf("%d ", stVal);
    EvenOdd(stVal+2, n);   
}