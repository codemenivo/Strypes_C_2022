
#include<stdio.h>
#define MIN(a, b, c) \
((a < b && a < c) ? a : (b < a && b < c) ? b : c)   
    


int main()
{
  int num1 = 20;
  int num2 = 38;
  int num3 = 16;

printf("Min num is: %d\n", MAX(num1, num2, num3));


  return 0;
}



