// Assignment 3: Switch Statement with Functions
// Create a simple calculator using a switch statement with separate functions.
#include <stdio.h>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int modulus(int a, int b) {
    return a % b;
}

int main() {
    double num1, num2, result;
    char choice;
    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    printf("Enter operation (+, -, *, /, %%): ");
    scanf(" %c", &choice);
    
    switch (choice) {
        case '+':
            result = add(num1, num2);
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = divide(num1, num2);
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                int mod_result = modulus((int)num1, (int)num2);
                printf("%d %% %d = %d\n", (int)num1, (int)num2, mod_result);
            } else {
                printf("Error: Modulus by zero!\n");
            }
            break;
        default:
            printf("Invalid operation!\n");
            break;
    }
    
    return 0;
}
