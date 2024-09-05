#include<stdio.h>
int main()
{
    float weight,height,BMI;
    printf("Enter your weight: ");
    scanf("%f", &weight);
    printf("\nEnter your height (in meters): ");
    scanf("%f", &height);
    
    BMI = weight / (height * height);
    
    printf("\nYour BMI is: %f", BMI);
 
}
