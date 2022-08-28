#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    /* Comparing Real numbers and read numbers from numbers.txt file */
    
    double currentNum, maxNum;
    maxNum = __DBL_MIN__;

    while (scanf("%lf", &currentNum) != EOF)
    {
        if(currentNum > maxNum)
        {
            maxNum = currentNum;
        }
    }

    printf("The MAX NUM is: %.3lf\n", maxNum);
    
    return 0;
}

/*
ivo@ivo-ASUS-TUF-Gaming-F17-FX706HCB-FX706HCB:
~/HomeWorks/HomeWork_Day3$ gcc Task_03_01_1.c -o Task_03_01_1 -lm

ivo@ivo-ASUS-TUF-Gaming-F17-FX706HCB-FX706HCB:
~/HomeWorks/HomeWork_Day3$ ./Task_03_01_1 < numbers.txt
The MAX NUM is: 100.560
*/
