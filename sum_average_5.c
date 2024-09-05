#include<stdio.h>
int main(){
    int a,b,c,d,e,sum;
    float average;
    printf("Enter 5 numbers-\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    sum = a + b + c + d + e;
    average = sum/5;
    

    printf("sum: %d\n",sum);
    printf("Average: %f\n",average);
}