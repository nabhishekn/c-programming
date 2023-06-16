#include <stdio.h>

int main(){
    unsigned char data = 0xA; //Assigning hexadecimal value

    //get 1st bit from data
    unsigned char bit_1 = (data >> 1) & 1;

    //get 2nd bit from data
    unsigned char bit_2 = (data >> 2) & 1;

    //get xor of bit 1 and bit 2
    unsigned char xor_of_bit = bit_1 ^ bit_2;

    printf("After swapping the bits, data value is: %2X", data ^ (xor_of_bit << 1 | xor_of_bit << 2));
    
    return 0; 

}