#include <stdio.h>
#include <stdint.h>

uint8_t abc = 7;

int maibn()
{
    uint8_t a = 10, b = 10, c = 10;
    {
        uint8_t abc = 5;
        {
            a = abc;
            uint8_t abc = 3;
            {
                b = abc;
                uint8_t abc = 2;
                {
                    c = abc;
                }
            }
        }
    }
    printf("%d %d %d %d", abc, a, b, c);
    return 0;
}
