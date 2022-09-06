#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Conv(int sValue, char *pBuffer);

int main()
{
    int num;
    printf("Please insert a number: ");
    scanf("%d", &num);
    int len = sizeof(num) / sizeof(int);
    char str[len];

    Conv(num, str);
    printf("\"%s\"\n", str);
    
    
    return 0;
}

void Conv(int sValue, char *pBuffer)
{
    if (sValue < 0)
    {
        sValue = abs(sValue);
        sprintf(pBuffer, " %d", sValue);
    }
    else
    {
        sprintf(pBuffer, "%d", sValue);
    }
    


}
