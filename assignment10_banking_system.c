#include <stdio.h>

int main() {
    double balance = 0.0;
    int choice;
    while (1) {
        printf("\n1. Deposit\n2. Withdraw\n3. Balance Inquiry\n4. Exit\nChoose: ");
        if (scanf("%d", &choice)!=1) return 0;
        if (choice == 1) {
            double amt; printf("Enter amount to deposit: "); if (scanf("%lf", &amt)!=1) return 0;
            if (amt <= 0) { printf("Invalid amount\n"); continue; }
            balance += amt; printf("Deposited. New balance: %.2f\n", balance);
        } else if (choice == 2) {
            double amt; printf("Enter amount to withdraw: "); if (scanf("%lf", &amt)!=1) return 0;
            if (amt <= 0) { printf("Invalid amount\n"); continue; }
            if (amt > balance) { printf("Insufficient balance\n"); continue; }
            balance -= amt; printf("Withdrawn. New balance: %.2f\n", balance);
        } else if (choice == 3) {
            printf("Balance: %.2f\n", balance);
        } else if (choice == 4) {
            printf("Goodbye\n"); break;
        } else {
            printf("Invalid option\n");
        }
    }
    return 0;
}
