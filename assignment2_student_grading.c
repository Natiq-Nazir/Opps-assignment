#include <stdio.h>

int main() {
    int marks[5], i, failCount = 0;
    int sum = 0;
    printf("Enter marks for 5 subjects (0-100):\n");
    for (i=0;i<5;i++) {
        if (scanf("%d", &marks[i])!=1) return 0;
        if (marks[i] < 40) failCount++;
        sum += marks[i];
    }
    if (failCount > 1) {
        printf("Repeat Year\n");
        return 0;
    }
    double perc = sum / 5.0;
    char grade;
    if (perc >= 80) grade = 'A';
    else if (perc >= 65) grade = 'B';
    else if (perc >= 50) grade = 'C';
    else if (perc >= 40) grade = 'D';
    else grade = 'F';
    printf("Percentage: %.2f%%\nGrade: %c\n", perc, grade);
    return 0;
}
