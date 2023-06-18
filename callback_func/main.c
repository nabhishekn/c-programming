//Example of callback function

#include <stdio.h>

void A(){
    printf("Function A is executed.");
}

//passing argument of function A
void B(void (*ptr)()){

    (*ptr) ();
}

int main(){

//Asigning address of function A to pointer which is void
    void(*ptr)() = &A;

//calling function B
    B(ptr);
    return 0;
}
