#include <stdio.h>
#include <stdint.h>

int checkBit(uint64_t mask, unsigned bit);
unsigned onesCount(uint64_t mask);

int main(){

  uint64_t num;
  printf("Insert Integer Number: ");
  scanf("%lu", &num);
  printf("Ones count in %lu = %u\n", num, onesCount(num));
  

    return 0;
}

int checkBit(uint64_t mask, unsigned bit) {
    return !!(mask & (1ULL << bit));
}

unsigned onesCount(uint64_t mask) {
    unsigned result = 0;
    for (int i = 63; i >= 0; i--){
        if (checkBit(mask, i))
            result++;
    }
    return result;
}