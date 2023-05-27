/*
1. Swap the nibbles: Ex: Input 1101 1010

Output: 1010 1101
*/

/* Steps for nibble swapping 
A nibble is a 4 bit aggregation
1. Take &  of 00001111 with number to get right nibble 
    i.e. 0b00001111 & N to get right nibble
2. Take & of 11110000 with number to get left nibble
    i.e. 0b11110000 & N
3. Left shift the right nibble obtained in step 1 by 4 position to get it as left nibble in final answer 
    i.e. <<4
4. Right shift the left nibble obtained in step 2 by 4 position to get it as a right nibble in final asnwer 
    i.e. >>4
5. Do OR(|) operation between values obtained in step 3 & 4 to get the answer
*/
#include <stdio.h>
int swapNibbles(int N)
{
    int right = (N & 0b00001111);
    right = (right << 4);
    int left = (N & 0b11110000);
    left = (left >> 4);
    return (right | left);
}

int main()
{
    int N = 70;
    printf("%d", swapNibbles(N));
    return 0;
}