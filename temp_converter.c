#include<stdio.h>
int main(){
    float temp;
    printf("Enter temperature in centigrade: ");
    scanf("%f",&temp);

    temp = (temp * 9/5) + 32;

    printf("\nThe temperature is: %f\n", temp);
}