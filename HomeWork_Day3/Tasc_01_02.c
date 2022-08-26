#include <stdio.h>
#include <math.h>


double calculateBmi(double index, double mass, double powerP) {
    return index * mass / powerP;
}

int main(int argc, char const *argv[])
{
    const double index = 1.3;
    const double expo = 2.5;
    double mass, height, bmi;
    printf("Please enter value of mass\n");
    scanf("%lf", &mass);
    printf("Please enter value of height\n");
    scanf("%lf", &height);

    while (height <= 0)
    {
        printf("Insert valid value\n");
        
        height = 0;
        scanf("%lf", &height);
    }
    
    double powerP;
    powerP = pow(height, expo);

    
    bmi = calculateBmi(index, mass, powerP);
    printf("Body mass Index is %.3lf\n", bmi);

    return 0;
}

/* The math functions in math.h have implementations in libm.so 
(or libm.a for static linking), and libm is not linked in by default. 
There are historical reasons for this libm/libc split, none of them 
very convincing.

This solved my issue. Nevertheless, I have 2 Ubuntu 20.04 boxes
 with Code::Blocks installed as IDE. One compiles the source code  
 (including math functions) properly without -lm, and the other needs -lm.


Compiling: 
ivo@ivo-ASUS-TUF-Gaming-F17-FX706HCB-FX706HCB:
~/HomeWorks/HomeWork_Day3$ gcc Tasc_01_02.c -o Tasc_01_02 -lm

Displaying:
ivo@ivo-ASUS-TUF-Gaming-F17-FX706HCB-FX706HCB:
~/HomeWorks/HomeWork_Day3$ ./Tasc_01_02


*/