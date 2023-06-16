#include <stdio.h>

void swap(int* a, int* b);          //function declaration

int main(){
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("\nEnter 2nd number: ");
    scanf("%d", &b);

    printf("\nBefore swapping: a=%d, b=%d", a, b);
    swap(&a, &b);               //function calling pass arguments
    printf("\nAfter swapping: a=%d, b=%d", a, b);

    return 0;
}

//function to swap 2 numbers in variables using bitwise operator
void swap(int* a, int* b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}