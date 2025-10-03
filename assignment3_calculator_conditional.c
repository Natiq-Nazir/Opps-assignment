#include <stdio.h>

int main() {
    long long x, y;
    char op;
    printf("Enter two integers and an operator (+ - * / %): ");
    if (scanf("%lld %lld %c", &x, &y, &op)!=3) return 0;
    long long res_int = 0;
    double res_double = 0;
    int is_double = 0, error = 0;

    if (op == '+') res_int = x + y;
    else if (op == '-') res_int = x - y;
    else if (op == '*') res_int = x * y;
    else if (op == '/') {
        if (y == 0) { printf("Error: Division by zero\n"); return 0; }
        is_double = 1; res_double = (double)x / (double)y;
    }
    else if (op == '%') {
        if (y == 0) { printf("Error: Mod by zero\n"); return 0; }
        res_int = x % y;
    }
    else { printf("Invalid operator\n"); return 0; }
    if (is_double) printf("Result: %.6f\n", res_double);
    else printf("Result: %lld\n", res_int);
    return 0;
}
