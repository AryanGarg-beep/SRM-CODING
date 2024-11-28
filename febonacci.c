#include<stdio.h>

int main() {
    //int n = 10;
    int a = 0, b = 1, c=0,limit,i;
    printf("Enter limit: ");
    scanf("%d",&limit);
    printf("First %d terms of Fibonacci series are: ", limit);
    for (i=0;i<=limit;i++) {
        printf("%d, ", c);
        c = a + b;
        b = a;
        a = c;
    }

    return 0;
}