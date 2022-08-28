#include<stdio.h>
#include<math.h>
#include<stdbool.h>


int main(int argc, char const *argv[])
{
    /*Create XOR program. Input numbers 0 or1 from STDIN */

    int firstNum, secondNum;
    printf("Please enter FerstNum 0 or 1: ");
    scanf("%d", &firstNum);

    while ((firstNum != 0) && (firstNum != 1))
    {
        printf("Insert correct number 0 or 1: ");

        scanf("%d", &firstNum);
    }

    printf("Please enter SecondNum 0 or 1: ");
    scanf("%d", &secondNum);

        while ((secondNum != 0) && (secondNum != 1))
    {
        printf("Insert correct number 0 or 1: ");

        scanf("%d", &secondNum);
    }

    int rezult;
    if (firstNum == secondNum)
    {
        rezult = 0;
    }
    else
    {
        rezult = 1;
    }

    printf("%d ^ %d XOR %d\n", firstNum, secondNum, rezult);

    return 0;
}


