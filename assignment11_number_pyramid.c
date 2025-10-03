#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    if (scanf("%d", &rows)!=1) return 0;
    for (int i = 1; i <= rows; i++) {
        for (int s = 0; s < rows - i; s++) printf(" ");
        for (int j = 1; j <= i; j++) printf("%d", j);
        for (int j = i-1; j >= 1; j--) printf("%d", j);
        printf("\n");
    }
    return 0;
}
