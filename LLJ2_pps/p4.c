//check if the number is a perfect cube
#include <stdio.h>
#include <math.h>
int main() {
    int num;
    printf("Enter a number to check if it's a perfect cube: ");
    scanf("%d", &num);
    int cubeRoot = round(cbrt(num));
    if (cubeRoot * cubeRoot * cubeRoot == num) {
        printf("%d is a perfect cube!\n", num);
    } else {
        printf("%d is not a perfect cube.\n", num);
    }
}

//corrected code
#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a number to check if it's a perfect cube: ");
    scanf("%d", &num);
    int cubeRoot = round(cbrt(abs(num)));
    if (num < 0) {
        cubeRoot = -cubeRoot;//fix for negetive numbers
    }
    if (cubeRoot * cubeRoot * cubeRoot == num) {
        printf("%d is a perfect cube!\n", num);
    } else {
        printf("%d is not a perfect cube.\n", num);
    }
}
