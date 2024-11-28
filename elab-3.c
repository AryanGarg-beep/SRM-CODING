#include <stdio.h>
int main()
{
    int tot_mins, hrs, mins;
    int THRESHOLD=550,MINaHOUR=60; 
    scanf("%d", &tot_mins);
    if(tot_mins>THRESHOLD){
            printf("Invalid input");
    }
    else if(tot_mins<100){
        printf("Invalid input");
    }
    else{
        hrs = (tot_mins / MINaHOUR);
        mins = (tot_mins % MINaHOUR);
        printf("%d Hours and %d Minutes",hrs,mins);
    }
}