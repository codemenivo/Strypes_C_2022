#include<stdio.h>
#include<math.h>
#define PI 22.0 /7.0

double calculatingVolumVertCylinder(double radiusR, double heightH);

int main(int argc, char const *argv[])
{
    /* Volum of vertical cylinder : V = Pi * R^2 * H  */

    double volumV, radiusR, heightH;
    printf("Please enter Radius in meters: ");
    scanf("%lf", &radiusR);
    printf("Please enter Height in meters: ");
    scanf("%lf", &heightH);
    volumV = calculatingVolumVertCylinder(radiusR, heightH);
    
    printf("Volum of vertical cylinder in cubic meters is: %.3lf\n", volumV);

    return 0;
}

double calculatingVolumVertCylinder(double radiusR, double heightH){
    return (PI * pow(radiusR, 2) * heightH);
}
