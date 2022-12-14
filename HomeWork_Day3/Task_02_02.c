#include<stdio.h>
#include<math.h>

double calculateAreaHorizCilinder(double radiusR, double heightH);


int main(int argc, char const *argv[])
{
    /* Horizontal Cilinder */ 
    /* Area = ((cos^-1 ((r - h) / r) * r^2)) - ((r - h) * (sqrt((2 * r * h) - h^2)))*/
    /* Volume = Area * Length  */

    double radiusR, lengthL, heightH, volumeV, areaA;
    printf("Please enter RadiusR in meters: ");
    scanf("%lf", &radiusR);
    printf("Please enter LengthL in meters: ");
    scanf("%lf", &lengthL);
    printf("Please enter HeightH in meters: ");
    scanf("%lf", &heightH);

    areaA = calculateAreaHorizCilinder(radiusR, heightH);
    volumeV = areaA * lengthL;

    printf("Area in sqare meters is: %.3lf\n", areaA);

    printf("Volum of Horizontal Cilinder in cubic meters is: %.3lf\n", volumeV);


    return 0;
}

double calculateAreaHorizCilinder(double radiusR, double heightH)
{
    return ((acos((radiusR - heightH) / (radiusR)) * pow(radiusR, 2.0)) - 
            ((radiusR - heightH) * (sqrt((2 * radiusR * heightH)-(pow(heightH, 2.0))))));            
            
}

/*
ivo@ivo-ASUS-TUF-Gaming-F17-FX706HCB-FX706HCB:~/HomeWork_Day3$ gcc Tasc_02_02.c -o Tasc_02_02 -lm
ivo@ivo-ASUS-TUF-Gaming-F17-FX706HCB-FX706HCB:~/HomeWork_Day3$ ./Tasc_02_02
Poluchavam otricatelni rezultati, koeto ne e viarno!
Da nameria Greshkata!
cos^-1 is an acos function in C language.
*/
