#include<stdio.h>
int main(){
    int a,b;
    float result;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    result = a/b;
    printf("Quotient: %f", result);
}