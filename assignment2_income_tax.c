// Assignment 2: Nested If-Else with Range Checking
// Write a program that calculates income tax based on income slabs.
#include <stdio.h>

int main() {
    double income, tax;
    
    printf("Enter your annual income: ");
    scanf("%lf", &income);
    
    if (income <= 250000) {
        tax = 0;
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    } else if (income <= 1000000) {
        tax = 250000 * 0.05 + (income - 500000) * 0.20;
    } else {
        tax = 250000 * 0.05 + 500000 * 0.20 + (income - 1000000) * 0.30;
    }
    
    printf("Income: %.2f\n", income);
    printf("Tax: %.2f\n", tax);
    
    return 0;
}
