/******************************************************************************

to find factrial of given number

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, i;
    long int fact = 1;
    printf("Enter number to find factorial: ");
    scanf("%d", &a);
    
    for(i=a; i>=1; i--){
        fact = fact*i;
    }
     printf("\nFactorial of %d is = %ld",a,fact);
    

    return 0;
}
