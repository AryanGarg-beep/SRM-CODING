//Write a C program to find quotient and remainder using arithmetic operators.

#include<stdio.h>
int main(){
    int a,b,quo,rem;
    printf("Enter two numbers: \n");
    scanf("%d %d",&a,&b);

    quo = a / b;
    rem = a % b;

    printf("Quotient: %d\n",quo);
    printf("Remainder: %d\n",rem);
}