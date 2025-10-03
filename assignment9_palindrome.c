#include <stdio.h>

int is_pal(int n) {
    if (n < 0) return 0;
    int orig = n, rev = 0;
    while (n) { rev = rev*10 + (n%10); n/=10; }
    return rev == orig;
}

int main() {
    int choice;
    printf("1) Check single number\n2) Print palindromes in a range\nChoose: ");
    if (scanf("%d", &choice)!=1) return 0;
    if (choice == 1) {
        int n; printf("Enter number: "); if (scanf("%d", &n)!=1) return 0;
        printf(is_pal(n) ? "Palindrome\n" : "Not palindrome\n");
    } else {
        int a,b; printf("Enter range (start end): "); if (scanf("%d %d", &a, &b)!=2) return 0;
        if (a > b) { int t = a; a = b; b = t; }
        for (int i = a; i <= b; i++) if (is_pal(i)) printf("%d\n", i);
    }
    return 0;
}
