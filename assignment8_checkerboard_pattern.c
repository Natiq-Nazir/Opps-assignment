// Assignment 8: Pattern Generation with Conditional Statements
// Write a program to print a checkerboard pattern of size n x n.
#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter the size of checkerboard: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if ((i + j) % 2 == 0) {
                printf("# ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
