#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int largest = arr[0];
    int position = 0;
    
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
            position = i;
        }
    }
    
    printf("\nArray elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nLargest element: %d\n", largest);
    printf("Position: %d\n", position + 1);
    
    return 0;
}
