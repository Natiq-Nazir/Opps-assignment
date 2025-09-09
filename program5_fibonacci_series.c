#include <stdio.h>

int main() {
    int n, i;
    unsigned long long first = 0, second = 1, next;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Number of terms should be positive.\n");
        return 1;
    }
    
    printf("Fibonacci Series: ");
    
    if (n >= 1) {
        printf("%llu ", first);
    }
    if (n >= 2) {
        printf("%llu ", second);
    }
    
    for (i = 3; i <= n; i++) {
        next = first + second;
        printf("%llu ", next);
        first = second;
        second = next;
    }
    
    printf("\n");
    
    return 0;
}
