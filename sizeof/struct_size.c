#include <stdio.h>
#include <stdint.h>
//#pragma pack(1)
typedef struct abc {
uint32_t b : 4;
uint8_t c;
uint16_t d;
uint16_t e;
} abc;

int main()
{
    struct abc abhi;
    printf("%lu", sizeof(struct abc));

}