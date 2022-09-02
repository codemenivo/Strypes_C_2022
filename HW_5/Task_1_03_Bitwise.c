#include<stdio.h>

#define SETBIT(mask, bit) (mask |= (1ull << (bit)))
#define CLEARBIT(mask, bit) (mask &= ~(1ull << (bit)))
#define INVERSEBIT(mask, bit) (mask ^= (1ull << (bit)))
#define CHECKBIT(mask, bit) !!(mask & (1ull << (bit)))


int main()
{
    int x = 10; //00001010
    int y = 15; //00001111



    printf("Set bit with index 2: %d = %b\n", SETBIT(x, 2), x);
    
    printf("Clear bit with index 2: %d = %b\n", CLEARBIT(x, 2), x);
    
    printf("Invers bit with index 2: %d = %b\n", INVERSEBIT(y, 2), y);
    
    printf("Check bit with index 2: %d = %b\n", CHECKBIT(y, 2), y);
    return 0;
}
