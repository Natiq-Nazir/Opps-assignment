#include <stdio.h>

int is_leap(int y) {
    if (y % 400 == 0) return 1;
    if (y % 100 == 0) return 0;
    if (y % 4 == 0) return 1;
    return 0;
}

int main() {
    int year;
    printf("Enter a year: ");
    if (scanf("%d", &year)!=1) return 0;
    if (is_leap(year)) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is NOT a leap year\nNext 5 leap years:\n", year);
        int found = 0, y = year + 1;
        while (found < 5) {
            if (is_leap(y)) { printf("%d\n", y); found++; }
            y++;
        }
    }
    return 0;
}
