//level 1 challenge 2
#include <stdio.h>
int main()
{
    int testnum1, testnum2; 
    int sum, sub, mult, mod;  
    float div;
    scanf("%d %d", &testnum1, &testnum2);
    if((testnum1>=1 && testnum1<=50)&&(testnum2>=1 && testnum2<=50)){
        sum = testnum1+testnum2;
        sub = testnum1-testnum2;
        mult = testnum1*testnum2;
        mod = testnum1%testnum2;
        div = testnum1/testnum2;
        printf("Addition: %d\nSubtraction: %d\nMultiplication: %d\nDivision: %0.3f\nModulus: %d",sum,sub,mult,div,mod);
    }
    else{
        printf("Invalid input");
    }
}