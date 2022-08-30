#include<stdio.h>
#include<math.h>

int rectangle(double w, double h, double* S, double* P);

int main()
{
  double w, h, S, P;  

  while ((scanf("%lf %lf", &w, &h)) != EOF)
  {
    int status = rectangle(w, h, &S, &P);
    if (status == -1)
    {
      printf("Invalid rectangle sizes!\n");
    }
    else
    {      
      printf("S = %.2lf\n", S);
      printf("P = %.2lf\n", P);
    }

  }

  return 0;
}

int rectangle(double w, double h, double* S, double* P)
{
  if ((w <= 0) || (h <= 0))
  {    
    return -1;
  }
  else
  {
  *S = w * h;
  *P = (2 * w) + (2 * h);
  return 0;
  }
}
