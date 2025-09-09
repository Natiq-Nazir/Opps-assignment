#include <stdio.h>

int main() {
    int num, originalNum, sum = 0, digit;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    originalNum = num;
    

    if (num < 0) {
        num = -num;
    }
    
    if (num == 0) {
        sum = 0;
    } else {
        while (num != 0) {
            digit = num % 10;
            sum += digit;
            num /= 10;
        }
    }
    
    printf("Original number: %d\n", originalNum);
    printf("Sum of digits: %d\n", sum);
    
  
    printf("Breakdown: ");
    num = originalNum;
    if (num < 0) {
        num = -num;
        printf("(-) ");
    }
    
    if (num == 0) {
        printf("0");
    } else {
        int temp = num, divisor = 1;
        
    
        while (temp >= 10) {
            divisor *= 10;
            temp /= 10;
        }
        
      
        int first = 1;
        while (divisor > 0) {
            digit = num / divisor;
            if (!first) printf(" + ");
            printf("%d", digit);
            num %= divisor;
            divisor /= 10;
            first = 0;
        }
    }
    printf(" = %d\n", sum);
    
    return 0;
}
