/******************************************************************************
call back practice

*******************************************************************************/
#include <stdio.h>
void function1(){
    printf("I am in function 1");
}

void function2(void (*ptr)()){
    printf("I am in function 2\n");
    ptr();                                  //callback funtion
    printf("\nI am in function 2\n");
}

int main()
{
    void (*ptr);            //pointer declaration
    ptr = function1;        //Assigning function to the pointer
    
    function2(ptr);         //calling function 2
    return 0;
}
