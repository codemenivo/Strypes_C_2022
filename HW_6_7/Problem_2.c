#include <stdio.h>
#include <string.h>

void Revers(char* ptr);

int main()
{
	char str[] = "This is a test";
		
	Revers(str);
	printf("%s", str);
    printf("\n");
	return 0;
}

void Revers(char* ptr)
{
	int lenght = 0;
	//lenght = strlen(ptr);
	while (ptr[lenght] != '\0')
	{
		lenght++;
	}
	
	int swapSize = lenght / 2;

	for (int i = 0; i < swapSize; i++)
	{
		char temp = ptr[i];
		ptr[i] = ptr[lenght - 1 - i];
		ptr[lenght - 1 - i] = temp;
	}
	

}