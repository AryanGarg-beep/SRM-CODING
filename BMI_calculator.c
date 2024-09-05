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
    if(BMI < 18.5){
        printf("\nYou are overweight");
    }

    else if(BMI >=18.5 && BMI <=25){
        printf("\nYou have a healthy weight");
    }

    else if(BMI > 25 && BMI <=30){
        printf("\nYou are overweight");
    }

    else{
        printf("\nYou are obese");
    }
 
}
