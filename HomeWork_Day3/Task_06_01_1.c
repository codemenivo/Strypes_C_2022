#include<stdio.h>
#include<math.h>

#define EPS 0.00001

int rezultCompare(double maxNum, double currentNum);

int main()
{
    /* Max Number from 3 real numbers */    

    double currentNum, maxNum;
    maxNum = __DBL_MIN__;
    int count = 0;
    //maxNum = 10.00;    
    //int *ptr;
    //int rezult;

    while (count != 3)
    {
        printf("Insert real number: ");
        scanf("%lf", &currentNum);

        //ptr = &rezultCompare;
        //if (*ptr)

        if (((currentNum - EPS) < maxNum) && 
        ((currentNum + EPS) > maxNum))
        {
            maxNum = maxNum;

            //printf("Rezult: YES\n");
            //printf("Rezult: %d\n", *ptr);            
            //printf("Rezult: %d\n", rezult);
        }
        else
        {
            if (currentNum > maxNum)
            {
                maxNum = currentNum;
            }
            //printf("Rezult: NO\n");
            //printf("Rezult: %d\n", *ptr);            
            //printf("Rezult: %d\n", rezult);

        }        
        
        count++;
    }
    
    printf("The Max Double Number is: %.5lf\n", maxNum);
    return 0;
   
}

 int rezultCompare(double maxNum, double currentNum){
    if (((currentNum - EPS) < maxNum) && 
        ((currentNum + EPS) > maxNum))
    {
        //rezult = 1;
        return 1;
    }
    else 
    {
        //rezult = 0;
        return 0;
    }    
        
    }
