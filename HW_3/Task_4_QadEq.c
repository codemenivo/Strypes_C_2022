#include<stdio.h>
#include<math.h>

int quadEq(double a, double b, double c, double* x1, double* x2);

int main()
{
  double a, b, c, x1, x2;

  while ((scanf("%lf %lf %lf", &a, &b, &c)))
  {
    int status = quadEq(a, b, c, &x1, &x2);
    if (status == -1)
    {
      printf("No real roots!");
    }
    else if (status == 1)
    {
      printf("One root x1 = %.2lf\n", x1);
    }
    else if (status ==  0)
    {
      printf("x1 = %.2lf\nx2 = %.2lf\n", x1, x2);
    }
    
    
  }
  

  return 0;
}

int quadEq(double a, double b, double c, double* x1, double* x2)
{
  double discrimD = (pow(b, 2)) - (4 * a * c);

  if (discrimD < 0)
  {
    return -1;
  }
  else if (discrimD == 0)
  {
    *x1 = *x2 = -(b / (2 * a));
    return 1;
  }
  else
  {
    *x1 = ((-b) + sqrt(discrimD)) / (2 * a);
    *x2 = ((-b) - sqrt(discrimD)) / (2 * a);
    return 0;
  }
  
  
}
