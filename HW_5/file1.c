//#include <stdio.h>
#include "swap.h"


int main(void)
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Before swap: Num1 = %d, Num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swap: Num1 = %d, Num2 = %d\n", num1, num2);
    return 0;
}

/*

ivo@ivo-ASUS-TUF-Gaming-F17-FX706HCB-FX706HCB:~/HomeWorks/HW_5$ ./file1
Enter first number: 30
Enter second number: 12
Before swap: Num1 = 30, Num2 = 12
After swap: Num1 = 12, Num2 = 30

ivo@ivo-ASUS-TUF-Gaming-F17-FX706HCB-FX706HCB:~/HomeWorks/HW_5$ gcc -E file1.c -o file1.i
ivo@ivo-ASUS-TUF-Gaming-F17-FX706HCB-FX706HCB:~/HomeWorks/HW_5$ gcc -S file1.i -o file1.s
ivo@ivo-ASUS-TUF-Gaming-F17-FX706HCB-FX706HCB:~/HomeWorks/HW_5$ gcc -c file1.s -o file1.o

*/