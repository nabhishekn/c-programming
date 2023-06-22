/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//addition function
int addition(int a, int b){
    return a + b;
}

//function definition of greeting function
void greeting(int (*ptr) (int, int)){
    printf("Greeting of the day!!!\n");
    printf("Addition of 9 and 10 is %d\n", ptr(9, 10));
}

//function definition of hello function
void hello(int (*ptr) (int, int)){
    printf("Hello from me\n");
    printf("Addition of 9 and 10 is %d\n", ptr(9, 10));
}

int main()
{
    //declare a function pointer to strore the address of the function 
    int (*ptr)(int, int);
    ptr = addition;
    
    //call greeting function
    greeting(ptr);
    
    //call hello function
    hello(ptr);
    
    return 0;
}
