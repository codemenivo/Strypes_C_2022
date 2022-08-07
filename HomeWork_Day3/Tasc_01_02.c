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
