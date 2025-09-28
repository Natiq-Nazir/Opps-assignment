// Assignment 10: Nested Control Statements with Arrays
// Find all subsets of an array whose sum equals a given target value.
#include <stdio.h>

int main() {
    int arr[10], n, target, i, j, k;
    int found = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter target sum: ");
    scanf("%d", &target);
    
    printf("Subsets with sum %d:\n", target);
    
    // Check all possible subsets using nested loops
    for (i = 1; i < (1 << n); i++) {  // 1 to 2^n - 1
        int sum = 0;
        printf("[");
        
        for (j = 0; j < n; j++) {
            if (i & (1 << j)) {
                sum += arr[j];
                printf("%d ", arr[j]);
            }
        }
        printf("]");
        
        if (sum == target) {
            printf(" -> Sum = %d ✓\n", sum);
            found = 1;
        } else {
            printf(" -> Sum = %d\n", sum);
        }
    }
    
    if (!found) {
        printf("No subsets found with sum = %d\n", target);
    }
    
    return 0;
}
