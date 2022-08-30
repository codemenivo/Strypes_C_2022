#include<stdio.h>
#include<math.h>

int triangle(double a, double b, double c, double* S, double* P);

int main()

{
  int checkEoF;
  double a, b, c, S, P;

  
    
  while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)  
  {
    int status = triangle(a, b, c, &S, &P);
    if(status == -1)
    {
    printf("Invalid input values!\n");
    }
    else
    {      
    printf("S = %.2lf\n", S);
    printf("P = %.2lf\n",P);
    }
  }

  
  


    return 0;
}

int triangle(double a, double b, double c, double* S, double* P)
{
    double halfP;

    if ((a <= 0) || (b <= 0) || (c <= 0))
    {
        return -1;  
    }
    else if ((a > (b + c)) || (b > (a + c)) || (c >(a + b)) )
    {
        return -1;
    }
    else
    {
    halfP = (a + b + c) / 2;

    *P = a + b + c;
    
    *S = sqrt(halfP * (halfP - a) * (halfP - b) * (halfP - c));

    return 0;
    }
}
