/*Code to find palindrome or not*/
#include <stdio.h>

int main(){
    int n, reserved = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    /*reversed integer is stored in reversed variable*/
    while(n!=0){
        remainder = n % 10;
        reserved = reserved * 10 + remainder;
        n/=10;
        }
        if (original == reserved){
            printf("%d is a palindrome", original);
        }else
            printf("%d is not palindrome", original);

    return 0;
}