// Assignment 6: Do-While with Number Reversal
// Program that repeatedly reverses positive integers until user enters 0.
#include <stdio.h>

int main() {
    int num, reversed;
    
    do {
        printf("Enter a positive integer (0 to exit): ");
        scanf("%d", &num);
        
        if (num > 0) {
            reversed = 0;
            int temp = num;
            
            while (temp != 0) {
                reversed = reversed * 10 + temp % 10;
                temp = temp / 10;
            }
            
            printf("Original: %d, Reversed: %d\n", num, reversed);
        }
        
    } while (num != 0);
    
    printf("Program ended.\n");
    
    return 0;
}
