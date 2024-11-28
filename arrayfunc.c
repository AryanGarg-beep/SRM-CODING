#include<stdio.h>
void sum(int a[],int n)
{
    int y=0,i;
    for(i=0;i<n;i++){
        y=y+a[i];
    }
    printf("Sum of array elements: %d",y);
}

int main(){
    int arr[20],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sum(arr,n);

}

