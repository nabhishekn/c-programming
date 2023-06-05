/*Date & Time:   04|05|2023    04:28PM
This is the sample code of callbyvalue*/

#include <stdio.h>

int swap(int, int);                 //function declaration

int main(){
    int a=20, b=10;
    /*swap function call with a & b actual parameters/arguments*/
    swap(a, b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}

/*function definition of "swap function" with int a and int b as formal parameters*/
int swap(int a, int b){
    int t;
    t = a;
    a = b;
    b = t;
    printf("a=%d, b=%d\n", a, b);
}


/*Output: a=10, b=20
          a=20, b=10
          
Observation--> In callbyvalue method we can not modify the value of the actual parameters
               differentr memory allocated for actual and formal parameters*/
               