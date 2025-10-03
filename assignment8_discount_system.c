#include <stdio.h>

int main() {
    double price;
    printf("Enter purchase value (Rs): ");
    if (scanf("%lf", &price)!=1) return 0;
    double disc = (price < 100) ? 0 :
                  (price <= 500) ? 0.10 :
                  (price <= 1000) ? 0.15 : 0.20;
    double finalp = price * (1 - disc);
    printf("Discount: %.0f%%\nFinal price: %.2f\n", disc*100, finalp);
    return 0;
}
