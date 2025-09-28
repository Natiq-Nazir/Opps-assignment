// Assignment 5: While Loop with Prime Numbers
// Write a program that prints all prime numbers less than or equal to n using while loop.
#include <stdio.h>

int isPrime(int num) {
    int i = 2;
    
    if (num <= 1) {
        return 0;
    }
    
    while (i * i <= num) {
        if (num % i == 0) {
            return 0;
        }
        i++;
    }
    
    return 1;
}

int main() {
    int n, i = 2;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Prime numbers up to %d:\n", n);
    
    while (i <= n) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
        i++;
    }
    
    printf("\n");
    
    return 0;
}
