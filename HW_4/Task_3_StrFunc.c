#include<stdio.h>
#include<string.h>

int main()
{
  char str1[100] = "Program language C";

  


printf("Length of the strig is: %ld\n", strlen(str1));
printf("StrnLen return max size is: %ld\n", strnlen(str1, 20));
printf("StrnLen return specified size is: %ld\n", strnlen(str1, 5));

  return 0;
}
