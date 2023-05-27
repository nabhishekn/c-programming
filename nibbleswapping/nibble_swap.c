#include <stdio.h>

int swapnibble(int x)
{
    return ((x & 0x0F)<<4 | (x & 0xF0)>>4);
}

int main()
{
    int n = 100;
    printf("%lu", swapnibble(n));
    return 0;
}

// #include <stdio.h>

// int swapnibbles(int N)
// {
//     int right = (N & 0b00001111);
//     right = (right << 4);
//     int left = (N & 0b11110000);
//     left = (left >> 4);
//     return (right | left);
// }

// int main()
// {
//     int N = 0b101100100;
//     printf("%d", swapnibbles(N));
//     return 0;
// }