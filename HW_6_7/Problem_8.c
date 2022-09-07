#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void Add(const char* p1, const char* p2, char* result);

int main(void)
{
    char sum[100];
    Add("12345", "678", sum);
    printf("The sum from \"12345\" + \"678\" = \"%s\"\n", sum);
    
    return 0;
}

void Add(const char* p1, const char* p2, char* result)
{
    int numP1, numP2, sumNum;
    sscanf(p1, "%d", &numP1);
    sscanf(p2, "%d", &numP2);
    sumNum = numP1 + numP2;
    sprintf(result, "%d", sumNum);    

}