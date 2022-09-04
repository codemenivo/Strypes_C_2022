#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>

unsigned char CheckBit(unsigned int uValue);

int main()
{
    printf("Please type unsigned integer number: ");
    unsigned int uValue;
    scanf("%x", &uValue);
    

    char status = CheckBit(uValue);
    //printf("%c", status);
    if (status == '1')
    {
        printf("The number has exactly one bit set\n");
    }
    else
    {
        printf("The number has more than one matches for bit = 1.\n");
    }

    return 0;
}

unsigned char CheckBit(unsigned int uValue)
{
    int sizeNum = sizeof(int) * 8;
    int count = 0;

    for (int i = 0; i < sizeNum; i++)
    {
        if (uValue & 1 << i)
        {
            count++;
        }
        
    }

    if (count == 1)
    {
        
        return '1';
    }
    else
    {
        
        return '0';
    }
    
    
    


}