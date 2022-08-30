#include<stdio.h>
#include<math.h>

int triangle(double a, double b, double c, double* S, double* P);

int main()

{
  int checkEoF;
  double a = 0, b = 0, c = 0, S = 0, P = 0;

  while (scanf("%d", &checkEoF) != EOF)
  {
    scanf("%lf, %lf, %lf", &a, &b, &c);    

triangle(a, b, c, &S, &P);

    printf("S = %.2lf\n", S);
    printf("P = %.2lf\n",P);
  }
  


    return 0;
}

int triangle(double a, double b, double c, double* S, double* P)
{
    double halfP;
    halfP = (a + b + c) / 2;

    *P = a + b + c;
    
    *S = sqrt(halfP * (halfP - a) * (halfP - b) * (halfP - c));


}
