#include <stdio.h>

int main() {
    float marks[5];
    float total = 0, average, percentage;
    char grade;
    int i;
    char subjects[5][20] = {"Mathematics", "Physics", "Chemistry", "English", "Computer"};
    
    printf("=== Simple Marks System ===\n");
    printf("Enter marks for 5 subjects (out of 100):\n");
    
    for (i = 0; i < 5; i++) {
        printf("%s: ", subjects[i]);
        scanf("%f", &marks[i]);
        
        // Validate marks
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks! Please enter marks between 0 and 100.\n");
            i--; // Repeat this iteration
            continue;
        }
        
        total += marks[i];
    }
    
    average = total / 5;
    percentage = (total / 500) * 100;
    
    // Assign grade based on percentage
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 50) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    printf("\n=== MARK SHEET ===\n");
    printf("Subject-wise Marks:\n");
    for (i = 0; i < 5; i++) {
        printf("%-12s: %.2f\n", subjects[i], marks[i]);
    }
    
    printf("\n=== RESULTS ===\n");
    printf("Total Marks    : %.2f / 500\n", total);
    printf("Average Marks  : %.2f\n", average);
    printf("Percentage     : %.2f%%\n", percentage);
    printf("Grade          : %c\n", grade);
    
   
    printf("\n=== PERFORMANCE ANALYSIS ===\n");
    if (grade == 'A') {
        printf("Excellent performance! Keep it up!\n");
    } else if (grade == 'B') {
        printf("Very good performance! Well done!\n");
    } else if (grade == 'C') {
        printf("Good performance! You can do better!\n");
    } else if (grade == 'D') {
        printf("Satisfactory performance. Need improvement.\n");
    } else if (grade == 'E') {
        printf("Below average performance. Study harder!\n");
    } else {
        printf("Poor performance. Need significant improvement!\n");
    }
    
    if (percentage >= 50) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }
    
    return 0;
}
