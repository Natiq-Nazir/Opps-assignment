// Assignment 7: Break and Continue with Nested Loops
// Find and print all pairs (x, y) such that x^2 + y^2 = n
#include <stdio.h>

int main() {
    int n, x, y;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Pairs (x, y) where x^2 + y^2 = %d:\n", n);
    
    for (x = 0; x * x <= n; x++) {
        for (y = 0; y * y <= n; y++) {
            if (x * x + y * y == n) {
                printf("(%d, %d)\n", x, y);
            }
            
            if (y * y > n) {
                break;  // No need to check larger y values
            }
        }
        
        if (x * x > n) {
            break;  // No need to check larger x values
        }
    }
    
    return 0;
}
