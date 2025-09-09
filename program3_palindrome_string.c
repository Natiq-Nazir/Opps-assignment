#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int length, i, isPalindrome = 1;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    
    length = strlen(str);
    

    for (i = 0; i < length; i++) {
        str[i] = tolower(str[i]);
    }
    
  
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }
    
    return 0;
}
