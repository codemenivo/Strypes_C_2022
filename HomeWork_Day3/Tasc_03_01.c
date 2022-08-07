#include<stdio.h>
#include<math.h>


int main(int argc, char const *argv[])
{
    /*max from three real numbers */

double currentNum, maxNum;
int count = 3;
maxNum = __DBL_MIN__;

while (scanf("%lf", &currentNum) != EOF)
{
    if (currentNum > maxNum)
    {
        maxNum = currentNum;
    }
    
printf("%lf\n", maxNum);
    
}


    return 0;
}
