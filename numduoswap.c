#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter number 1 and 2-\n");
    scanf("%d %d",&num1,&num2);
    
    printf("\nThe numbers are -  %d,%d\n",num1,num2);

    num3=num2;
    num2=num1;
    num1=num3;

    printf("\nThe numbers after swapping are -  %d,%d\n",num1,num2);
}