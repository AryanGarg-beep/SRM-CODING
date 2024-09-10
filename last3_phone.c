//Write a C program to read a phone number in 10 digits and display the last three digits.

#include<stdio.h>

int main(){
    long long a;
    printf("Enter a number: ");
    scanf("%lld", &a);
   // printf("%lld",a);
   int num;
   num = a%1000;
   printf("result: %d", num);


}
