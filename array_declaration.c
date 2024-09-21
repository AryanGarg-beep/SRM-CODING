#include<stdio.h>
int main(){
	//single line array
	int a[3],i,b[3][3],j;
	printf("Enter the array numbers-\n");
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<3;i++){
		printf("%d\t",a[i]);
	}

	//2D array
	printf("\n\nEnter the array numbers-\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter number in (%d,%d): ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nArray is\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",b[i][j]);
			}
		printf("\n");
	}


}


