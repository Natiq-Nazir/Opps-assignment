#include <stdio.h>
#include <math.h>

int main() {
    double a1, b1, a2, b2;
    printf("Enter real and imaginary parts of first complex number: ");
    if (scanf("%lf %lf", &a1, &b1)!=2) return 0;
    printf("Enter real and imaginary parts of second complex number: ");
    if (scanf("%lf %lf", &a2, &b2)!=2) return 0;
    double m1 = sqrt(a1*a1 + b1*b1);
    double m2 = sqrt(a2*a2 + b2*b2);
    if (fabs(m1 - m2) < 1e-9) printf("Equal\n");
    else if (m1 > m2) printf("First complex number has higher magnitude\n");
    else printf("Second complex number has higher magnitude\n");
    return 0;
}
