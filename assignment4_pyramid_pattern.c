// Assignment 4: For Loop with Advanced Patterns
// Write a program that generates a pyramid pattern with numbers.
#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Print numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        printf("\n");
    }
    
    return 0;
}
