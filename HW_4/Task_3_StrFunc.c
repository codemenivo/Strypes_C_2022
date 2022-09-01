#include<stdio.h>
#include<string.h>

int main()
{
  char str1[100] = "Program language C";
  char str2[50];  
  char str3[50] = " course";
  


printf("Length of the strig is: %ld\n", strlen(str1));
printf("StrnLen return max size is: %ld\n", strnlen(str1, 20));
printf("StrnLen return specified size is: %ld\n", strnlen(str1, 5));

strcpy(str2, str1);
printf("Content of second string is: %s\n", str2);
memset(str2, 0, sizeof(str2));
strncpy(str2, str1, 20);
printf("Content of second string is a max: %s\n", str2);
memset(str2, 0, sizeof(str2));
strncpy(str2, str1, 9);
printf("Content of second string is a part: %s\n", str2);
memset(str2, 0, sizeof(str2));

strcat(str1, str3);
printf("Concat string is: %s\n", str1);
strncat(str3, str1, 11);
printf("Part Concat is: %s\n", str3);

  return 0;
}
