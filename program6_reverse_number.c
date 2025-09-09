#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, digit;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    originalNum = num;
    
  
    if (num < 0) {
        num = -num;
    }
    
    while (num != 0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    
   
    if (originalNum < 0) {
        reversedNum = -reversedNum;
    }
    
    printf("Original number: %d\n", originalNum);
    printf("Reversed number: %d\n", reversedNum);
    
    return 0;
}
