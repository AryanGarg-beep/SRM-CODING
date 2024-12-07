//find out if the number is perfect number
#include <stdio.h>
int main() {
    int num, divisors_sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i < num; i++) {
         if (num % i == 0) {
             divisors_sum += i;
        }
     }
    if (divisors_sum == num) {
         printf("%d is a perfect number.\n", num);
    } else {
         printf("%d is not a perfect number.\n", num);
     }
 }

//corrrected code
#include <stdio.h>
int main() {
    int num, divisors_sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("%d is not a perfect number.\n", num);
    } else {
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                divisors_sum += i;
            }
        }
        if (divisors_sum == num) {
            printf("%d is a perfect number.\n", num);
        } else {
            printf("%d is not a perfect number.\n", num);
        }
    }
}



