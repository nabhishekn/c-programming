#include <stdio.h>

void callback_fc(void){
    printf("In callback function\n");
}

void test_loop(void (*fn_ptr)(void))
{
    int i;
    for(i=0; i<6; i++)
    {
        if(i==5)
        {
            //calling callback function
            (*fn_ptr)();
        }
        printf("i = %d\n", i);
    }
}

int main(){
    
    //assigning callback function address to pointer variable
    void (*fn_ptr)(void) = &callback_fc;

    //calling test_loop function
    test_loop(fn_ptr);
    
    return 0;
}