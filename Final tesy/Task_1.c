#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"funcList.h"

int ranRnum(int min, int max);

int main()
{
    srand(time(NULL));
    char* arr;
    int n, m, k;

    scanf("%d", &n);
    arr = malloc(n * sizeof(char));

    if (NULL == arr)
    {
        fprintf(stderr, "Have Malloc problem\n");
        return EXIT_FAILURE;
    }
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = ranRnum('a', 'z');

    }

    scanf("%d", &m);
    arr = realloc(arr, (n + m) * sizeof(char));

    if (NULL == arr)
    {
        fprintf(stderr, "Have Realloc problem\n");
        return EXIT_FAILURE;
    }
    
    for (int i = n; i < (n + m); i++)
    {
        arr[i] = ranRnum('A', 'Z');
    }   

    scanf("%d", &k);
    arr = realloc(arr, (m + k) * sizeof(char));

    if (NULL == arr)
    {
        fprintf(stderr, "Have Realloc problem\n");
        return EXIT_FAILURE;
    }
    
    for (int i = m; i < (m + k); i++)
    {
        arr[i] = ranRnum('!', '-');
    }   


    int sizeArr = n + m + k;

    arr[sizeArr] = "\0";

    printf("Array elements:\n");
    void print(arr, sizeArr);
    printf("\n");

    printf("Number small elements:\n");
    void printNumSmallLetter(n);
    printf("\n");

    void printSimbol(arr, n, m, k);
    

    free(arr);
    return 0;
}


int ranRnum(int min, int max)
{
    int rNum = (min + rand()) % (max - min + 1);

    return rNum;
}