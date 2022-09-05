// Binary search

#include <stdio.h>
#include <math.h>

unsigned int BinSearch(unsigned int *pArray, int uArraySize, int uValue);

int main()
{
	int arr[]= {10, 20, 30, 40, 50, 60, 70, 80};	

	int status = BinSearch(arr, sizeof(arr)/sizeof(arr[0]), 50);

	if(status == -1)
	{
		printf("The uValue is not match\n");
	}
	else
	{
		printf("Index is: %d\n", status);
	}	

	
	return 0;
}

unsigned int BinSearch(unsigned int *pArray, int uArraySize, int uValue)
{
	unsigned int high = uArraySize;
	unsigned int low = 0;
	unsigned int mid = (high + low) / 2;
	unsigned int backNum = -2;

	if (pArray[mid] == uValue)
	{
		backNum = mid;
		return backNum;
	} 
	else
	{
		while ((pArray[mid] != uValue))
		{
			if (pArray[mid] > uValue)
			{				
				high = mid;
				mid = (low + high) / 2;
				
				if (pArray[mid] == uValue)
				{
					backNum = mid;
					
				}
				else if ((mid == 0) && (pArray[mid] != uValue))
				{
					backNum = -1;
					break;
				}
						

			}
			else if (pArray[mid] < uValue)
			{
				low = mid;
				mid = (low + high) / 2;

				if (pArray[mid] == uValue)
				{
					backNum = mid;
				}
				else if ((mid == (uArraySize - 1)) && (pArray[mid] != uValue))
				{
					backNum = -1;
					break;
				}
				
			}
			
		}
		return backNum;	
	}
	

}