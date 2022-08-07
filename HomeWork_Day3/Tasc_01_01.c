#include<stdio.h>
#include<math.h>

double calculateBmi(double mass, double height){
    
    return mass / (height * height);
}

int main(){

double mass, height;
printf("Please enter the value of mass\n");
scanf("%lf", &mass);

printf("Please enter the value of height\n");
//double height;
scanf("%lf", &height);


    while (height <= 0)
    {
        printf("Insert valid value\n");
        
        height = 0;
        scanf("%lf", &height);

    } 
        
        double bmi = calculateBmi(mass, height);
        printf("Body mass Index is %.3lf\n", bmi);
        
    
    return 0;
}

