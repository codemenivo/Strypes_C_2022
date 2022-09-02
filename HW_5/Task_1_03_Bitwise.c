#include<stdio.h>

#define SETBIT(mask, bit) (mask |= (1ull << (bit)))
#define CLEARBIT(mask, bit) (mask &= ~(1ull << (bit)))
#define INVERSEBIT(mask, bit) (mask ^= (1ull << (bit)))
#define CHECKBIT(mask, bit) !!(mask & (1ull << (bit)))
#define SWAP(a,b) (a ^= b ^= a ^= b)
                    

int main()
{
    int x = 10; //00001010
    int y = 15; //00001111
    int k = 9;
    int m = 14;



    printf("Set bit with index 2: %d = %b\n", SETBIT(x, 2), x);
    
    printf("Clear bit with index 2: %d = %b\n", CLEARBIT(x, 2), x);
    
    printf("Invers bit with index 2: %d = %b\n", INVERSEBIT(y, 2), y);
    
    printf("Check bit with index 2: %d = %b\n", CHECKBIT(y, 2), y);

    SWAP(k, m);
    printf("Swap two numbers k = 9 and m = 14 => k = %d and m = %d\n", k, m);
    return 0;
}
