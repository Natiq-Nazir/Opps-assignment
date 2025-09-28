// Assignment 9: Menu-Driven Program with Loops
// Create a menu-driven program for mathematical operations.
#include <stdio.h>

int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int choice, num, num1, num2, result;
    
    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Factorial\n");
        printf("2. GCD\n");
        printf("3. LCM\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                result = factorial(num);
                printf("Factorial of %d = %d\n", num, result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = gcd(num1, num2);
                printf("GCD of %d and %d = %d\n", num1, num2, result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = lcm(num1, num2);
                printf("LCM of %d and %d = %d\n", num1, num2, result);
                break;
            case 4:
                printf("Exit\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    
    return 0;
}
