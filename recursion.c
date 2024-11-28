
#include<stdio.h>

int recur(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else{
        return n*recur(n-1);
    }
}

int main() {
    long int a;
    int n;
    scanf("%ld",&a);
    a = recur(n);
    printf("%ld",a);
    return 0;
}