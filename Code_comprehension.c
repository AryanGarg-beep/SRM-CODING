//A shopkeeper offers a "Buy 1 Get 1 Free" deal on a specific item.
// Write a program to calculate the total number of items a customer receives and the effective cost per item if they buy n items at ₹50 each
#include<stdio.h>
int main(){
    int items,cost;
    float eff_cost;
    printf("Enter the number of items bought: ");
    scanf("%d",&items);//TAKE INPUT

    cost = items*50; //BUY ONE GET ONE
    eff_cost = cost/(items*2);//EFFECTIVE COSTS
    //PRINT OUTPUT
    printf("\nNumber of items bought: \t %d", items);
    printf("\nNumber of items recieved:\t %d", items*2);
    printf("\nCost: \t\t\t\t%d", cost);
    printf("\nEffective cost:\t\t\t %0.2f", eff_cost);
    
}