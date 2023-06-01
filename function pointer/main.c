#include <stdio.h>

void add(int a, int b)
{
    printf("Addition is %d\n", a+b);
}

void subtraction(int a, int b)
{
    printf("Subtraction is %d\n", a-b);
}

void mul(int a, int b)
{
    printf("Multiplication is %d\n", a*b);
}

int main()
{
    void (*fun_ptr_arr[]) (int, int) = {add, subtraction, mul};
    unsigned int ch, a=10, b=20;
    printf("Enter choice: 0 for add, 1 for subtraction, 2 for mul --> ");
    scanf("%d", &ch);

    if(ch > 2) return 0;
    (*fun_ptr_arr[ch])(a, b);
    return 0;
 }