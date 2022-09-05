//Bubble sort
#include <stdio.h>

void Bubble(int* pArray, unsigned int uLen);

int main()
{
	int arr[] = {15, 31, -2, 19, 87, 70};
	int lenght = sizeof(arr) / sizeof(*arr);

	Bubble(arr, lenght);
	printf("Sorted array in descending order:\n");
	for (int i = 0; i < lenght; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	
	return 0;
}

void Bubble(int* pArray, unsigned int uLen)
{

	for (int i = 0; i < uLen - 1; i++)
	{
		for (int k = 0; k < (uLen - 1 - i); k++)
		{
			if (pArray[k] > pArray[k + 1])
			{
				int temp = pArray[k];
				pArray[k] = pArray[k + 1];
				pArray[k + 1] = temp;
			}
			
		}
		
	}
	

}