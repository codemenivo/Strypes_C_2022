#include<stdio.h>

#define SETBIT(mask, bit) (mask |= (1ull << (bit)))


int main()
{
    int x = 10; //00001010



    printf("Set bit with index 2: %d = %b\n", SETBIT(x, 2), SETBIT(x, 2));
    return 0;
}
