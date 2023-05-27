#include <stdio.h>
#include <stdint.h>

void fun(int *p)
{
    *p = 0;
}

int main()
{
    const int i = 10;
    fun(&i);
    return 0;
}

 
 