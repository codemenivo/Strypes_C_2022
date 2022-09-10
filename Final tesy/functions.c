#ifdef _FUNCTIONS_
#define _FUNCTIONS_
#include<stdio.h>
#include"funcList.h"

void printCh(char* arr, int size)
{    
    for (int i = 0; i < size; i++)
    {
        printf("%c", arr[i]);
    }
    
}


void printNumSmallLetter(int size)
{
    printf("%d", size);      
    

}


void printSimbol(char* arr, int n, int m, int k)
{
    int maxCountSmall = 0;
    int maxCountUpper = 0;
    int maxCountSim = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n; i++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                int currMaxS = 0
                arr[i] == arr[j];
                currMaxS++;
                if (maxCountSmall < currMaxS)
                {
                    maxCountSmall = currMaxS;
                }
                
            }
            
        }
           
    }

    for (int i = n; i < m; i++)
    {
        for (int j = n; i < m; i++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                int currMaxUpp = 0
                arr[i] == arr[j];
                currMaxUpp++;
                if (maxCountUpper < currMaxS)
                {
                    maxCountUpper = currMaxS;
                }
                
            }
            
        }
           
    }


    for (int i = m; i < k; i++)
    {
        for (int j = m; i < k; i++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                int currMaxSim = 0
                arr[i] == arr[j];
                currMaxSim++;
                if (maxCountSim < currMaxSim)
                {
                    maxCountSim = currMaxSim;
                }
                
            }
            
        }
           
    }

    if ((maxCountSmall > maxCountUpper) && (maxCountSmall > maxCountSim))
    {
        printf("Most common simbol: %d", maxCountSmall);
    }
    else if ((maxCountUpper > maxCountSmall) && (maxCountUpper > maxCountSim))
    {
        printf("Most common simbol: %d", maxCountUpper);
    }
    else
    {
        printf("Most common simbol: %d", maxCountSim);
    }
    
    

    
}


#endif