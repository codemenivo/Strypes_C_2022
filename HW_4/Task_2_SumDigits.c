#include<stdio.h>
#include<math.h>

unsigned sumArrayDigits(const int* arr, size_t n);

int main()
{
  int array[] = {30, 2, 18, 132, 55};
  int sizeArr = sizeof(array) / sizeof(int);

  int rezult = sumArrayDigits(array, sizeArr);

  printf("The sum of gigits is: %d\n", rezult);
  
  return 0;
}


unsigned sumArrayDigits(const int* arr, size_t n)
{
  unsigned int sum = 0;
  for (int i = 0; i < n; i++)
  {
    int num = arr[i];

    while (num > 0)
    {
      int digit = num % 10;
      num /= 10;
      sum += digit;
    }
    
  }
  return sum;
}