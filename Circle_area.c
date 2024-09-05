#include<stdio.h>
int main(){
    int rad;
    float area;

    printf("Enter radius of circle: ");
    scanf("%d",&rad);

    area = 3.14 * rad * rad;

    printf("\nThe area is %f", area);
}

