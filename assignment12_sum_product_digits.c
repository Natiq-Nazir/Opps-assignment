#include <stdio.h>

int main() {
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld", &n)!=1) return 0;
    long long orig = (n<0)? -n : n;
    long long sum = 0, prod = 1;
    if (orig == 0) prod = 0;
    while (orig > 0) {
        int d = orig % 10;
        sum += d;
        prod *= d;
        orig /= 10;
    }
    printf("Sum of digits: %lld\nProduct of digits: %lld\n", sum, prod);
    return 0;
}
