#include <stdio.h>
#include <math.h>

int main() {
    double a,b,c;
    printf("Enter coefficients a b c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c)!=3) return 0;
    if (fabs(a) < 1e-12) { printf("Invalid coefficient a (should be non-zero)\n"); return 0; }
    double disc = b*b - 4*a*c;
    if (disc > 0) {
        double r1 = (-b + sqrt(disc)) / (2*a);
        double r2 = (-b - sqrt(disc)) / (2*a);
        printf("Real and distinct roots: %.6f and %.6f\n", r1, r2);
    } else if (fabs(disc) < 1e-12) {
        double r = -b / (2*a);
        printf("Real and equal roots: %.6f\n", r);
    } else {
        double real = -b / (2*a);
        double imag = sqrt(-disc) / (2*a);
        printf("Imaginary roots: %.6f + %.6fi and %.6f - %.6fi\n", real, imag, real, imag);
    }
    return 0;
}
