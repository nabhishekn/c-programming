#include <stdio.h>

//function definition
int addnumbers(int a, int b){
    return a + b;
}

int main(){
    int a, b, sum;
    //function declaration
    int (*ptr_sum) (int, int);
    //function initialisation
    ptr_sum = &addnumbers;

    a = 10;
    b = 30;
    //function calling
    sum = (*ptr_sum) (a, b);

    printf("Sum = %d", sum);

    return 0;
}