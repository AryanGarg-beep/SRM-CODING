#include<stdio.h>
int main(){
    float l,b,h;
    printf("Enter the lenght,breadth-\n");
    scanf("%f %f %f",&l,&b,&h);
    printf("The surface area is:%f",2*l*b + 2*b*h + 2*l*h);
    }