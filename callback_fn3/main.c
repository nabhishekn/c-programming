/******************************************************************************

callback function test

*******************************************************************************/
#include <stdio.h>

void callback_fn(void){
    int a=20, b=10, c;
    printf("I am in the callback loop\n");
    c = a+b;
    printf("sum = %d\n", c);
}

void test_loop(void (*fn_ptr)(void)){
    int i;
    for(i=0; i<6; i++)
    {
        if(i==4){
            (*fn_ptr)();
        }
        printf("i = %d\n", i);
    }
}

int main()
{
    void (*fn_ptr)(void) = &callback_fn;
    
    test_loop(fn_ptr);

    return 0;
}
