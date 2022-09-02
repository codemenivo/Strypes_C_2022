#include <stdio.h>

void swap(int*, int*);

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

ivo@ivo-ASUS-TUF-Gaming-F17-FX706HCB-FX706HCB:~/HomeWorks/HW_5$ gcc file1.c -o file1 -lm
/usr/bin/ld: /tmp/cctYvsoz.o: in function `main':
file1.c:(.text+0xa4): undefined reference to `swap'
collect2: error: ld returned 1 exit status
ivo@ivo-ASUS-TUF-Gaming-F17-FX706HCB-FX706HCB:~/HomeWorks/HW_5$ 

*/