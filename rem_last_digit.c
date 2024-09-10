//Write a program to read a number from the user and remove the last digit and display the result.

#include<stdio.h>

int main(){
    int i,num,new_num,digit;
    printf("Enter a number: ");
    scanf("%d",&num);

        digit = num%10;
       // printf("%d\n",digit);
        new_num = num - digit;
        //printf("%d\n",new_num);
        new_num = new_num/10;
        printf("%d\n",new_num);

}

