//Read a number from the user and multiply the last digit and the second last digit

#include<stdio.h>
int main(){
    int num,num1,num2,product;
    printf("Enter a number: ");
    scanf("%d",&num);

    num1 = num % 10;
    num = num / 10;  
    num2 = num % 10;
    product = num1*num2;
    printf("\nThe product of the last digit and the second last digit is: %d\n", product);

}