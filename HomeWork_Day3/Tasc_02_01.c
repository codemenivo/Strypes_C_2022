#include<stdio.h>
#include<math.h>

double volumeCilinder(double radiusR, double heightH)
{ 
    return (22 * radiusR * radiusR * heightH) / 7;
}

int main(int argc, char const *argv[])
{
    /* Obem na praw cilindar V = pi * R^2 * H */

    double volumV, radiusR, heightH;
    printf("Please enter Radius in meters: ");
    scanf("%lf", &radiusR);
    printf("Please enter Height in meters: ");
    scanf("%lf", &heightH);
    volumV = volumeCilinder(radiusR, heightH);

    printf("Volum of Cilinder in cubic meters is: %.3lf\n", volumV);

    return 0;
}
