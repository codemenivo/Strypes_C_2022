#include<stdio.h>
#include<string.h>

int main()
{
  char str1[100] = "Program language C";
  char str2[50];  
  char str3[50] = " course";
  char str4[50] = "Program course";
  char str5[50] = "am ";

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

int status;
status = strcmp(str1, str4);
if (status < 0)
{
    printf("STR1 less than STR2 and Status is: %d\n", status);
}
else if (status > 0)
{
   printf("STR1 bigger than STR2 and Status is: %d\n", status); 
}
else
{
    printf("STR1 is equal to STR2 and Status is: %d\n", status);
}


status = strncmp(str1, str4, 7);
if (status < 0)
{
    printf("STR1 less than STR2 and Status is: %d\n", status);
}
else if (status > 0)
{
   printf("STR1 bigger than STR2 and Status is: %d\n", status); 
}
else
{
    printf("STR1 is equal to STR2 and Status is: %d\n", status);
}


char* pst;
pst = strstr(str1, str5);

if(pst != NULL)
{
    printf("First coincedence of STR5 in STR1 is %s\n", pst);
}
else
{
    printf("Not matches found!\n");
}


  return 0;
}
