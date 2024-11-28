// lvl 1 challenge 3

#include <stdio.h>
int main(){
    int billamt, amtgiven; 
    scanf("%d %d",&amtgiven, &billamt);
    if((0<billamt && billamt<2500)&&(amtgiven<2500 && amtgiven>0)){
                printf("Quotient: %d\nRemainder: %d",amtgiven/billamt,amtgiven%billamt);
            }
           if (billamt == 0) {
                printf("Error: Division by zero.");
            }
}