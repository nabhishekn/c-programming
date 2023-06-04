
/*Date and Time : 04|05|2023    SAT 12:23AM
This is the program refer to call by reference topic in c*/

#include <stdio.h>

int swap(int *x, int *y);                           //Function declarartion

int main(){

    int a=10, b=20;

    printf("Before swap --> \na=%d \tb=%d\n", a,b);

    /*Arguments/Actual parameters &a, &b*/
    swap(&a, &b);                                   //Passing address of the variables as  
    printf("After swap --> \na=%d \tb=%d", a,b);
    return 0;
}

/*Formal parameters *x and *y*/
int swap(int *x, int *y){
    int t;

    t = *x;
    *x = *y;
    *y = t;
}