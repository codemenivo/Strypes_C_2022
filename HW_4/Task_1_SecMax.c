#include<stdio.h>
#include<stdint.h>
#include<math.h>
#include<limits.h>


int secondMax(const int* arr, size_t n, int* sMax);

int main()
{
    int array[] = {12, -3, 5, 131, 100, 60};
    //int array[] = {2, 2, 2, 2};
    //int array[] = {5};
    //int array[] = {};

    size_t len = sizeof(array) / sizeof(array[0]);
    int sMax = INT_MIN;

    int status = secondMax(array, len, &sMax);
    
    if (status == -1)
    {
        printf("The array is empty!\n");
    }
    else if (status == 1)
    {
        printf("The array has only one element %d\n", *array);
    }
    else if (status == 0)
    {
        printf("All elements in array are equals %d\n", sMax);
        
    }
    else
    {
       printf("Second Max number in array is: %d\n", sMax);
       
    }
    
    
    
    return 0;
}


int secondMax(const int* arr, size_t n, int* sMax)
{
    int max = arr[0];
    int count = 0;

    if (n <= 0)
    {
        return -1;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        int tempArr[n];
        for (int i = 0; i < n ; i++)
        {
            tempArr[i] = arr[i];

            if (max == arr[i])
            {
                count++;                
            }
            
        }
        for (int k = 0; k < (n - 1); k++)
        {    
            for (int j = 0; j < (n - k - 1); j++)
            {
                if (tempArr[j] < tempArr[j + 1])
                {
                    int temp = tempArr[j];
                    tempArr[j] = tempArr[j + 1];
                    tempArr[j + 1] = temp;
                }
                
            }
            
        }          
        
        if (count == n)
        {
            *sMax = max;
            return 0;
        }
        else
        {
            *sMax = tempArr[1]; 
            
        }
        
        
        
    }
    


}