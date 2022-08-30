#include<stdio.h>
#include<math.h>


int main(int argc, char const *argv[])
{
    /*max from three real numbers */

double currentNum, maxNum;
int count = 3;
maxNum = __DBL_MIN__;

while (count != 0)
{
    printf("Insert Real Number: ");
    scanf("%lf", &currentNum);
    if (currentNum > maxNum)
    {
        maxNum = currentNum;
    }
    
count--;
    
}

printf("The MAX number is: %lf\n", maxNum);


    return 0;
}
