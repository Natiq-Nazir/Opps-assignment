#include <stdio.h>
#include <math.h>

int main() {
    int num, i, isPrime = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        if (num <= 0) {
            printf("Prime numbers are positive integers greater than 1.\n");
        } else {
            printf("1 is neither prime nor composite.\n");
        }
        return 0;
    }
    
    if (num == 2) {
        printf("%d is a prime number.\n", num);
        return 0;
    }
    
    if (num % 2 == 0) {
        printf("%d is not a prime number.\n", num);
        printf("It is divisible by 2.\n");
        return 0;
    }
    
    
    for (i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            isPrime = 0;
            printf("%d is not a prime number.\n", num);
            printf("It is divisible by %d.\n", i);
            break;
        }
    }
    
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    }
    
    return 0;
}
