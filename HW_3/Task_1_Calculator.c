#include<stdio.h>
#include<math.h>

int main()
{
    double num1, num2;
    int endNum;
    char simbol;

        printf("Please enter Math operation (+, -, *, /): ");
        scanf("%c", &simbol);
        
        printf("Please enter real Num1: ");
        scanf("%lf", &num1);     
 
        printf("Please enter real Num2: ");
        scanf("%lf", &num2);
        

    while (scanf("%d", &endNum) != EOF)
    {

        switch (simbol)
        {
        case '+':
            printf("%lf + %lf = %.2lf", num1, num2, (num1 + num2));
            break;

        case '-':
            printf("%lf - (%lf) = %.2lf", num1, num2, (num1 - (num2)));
            break;

        case '*':
            printf("%lf * %lf = %.2lf", num1, num2, (num1 * num2));
           break;

        case '/':
            while (num2 == 0)
            {
                printf("Insert correct number: ");
                scanf("%lf", &num2);
            }
            
            printf("%lf / %lf = %.2lf", num1, num2, (num1 / num2));

            break;
        
        default:
            printf("Error! Math operator is not correct!");
            break;
        }

    }
    




    return 0;
}
