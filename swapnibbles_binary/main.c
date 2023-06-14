/******************************************************************************

swap nibbles of a given number and find the binary of given as well as new number

*******************************************************************************/
# include <stdio.h>

int findbinary(int n);
int swapnibble(int num);

int main( )
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    findbinary(a);
    
    printf("After swapping nibble: %d\n", swapnibble(a));
    
    findbinary(swapnibble(a));
    return 0 ;
}

//function to get binary of a number
int findbinary(int n){
    int i, a [10];
    for (i=0; n>0; i++){
        a[i] = n % 2;
        n = n/2;
    }
    printf("Binary is: ");
    for(i=i-1; i>=0; i--){
        printf("%d", a[i]);
    }
    printf("\n");
}

//function to swap 2 nibbles
int swapnibble(int num){
    return (num & 0x0f)<<4 | (num & 0xf0)>>4;
}