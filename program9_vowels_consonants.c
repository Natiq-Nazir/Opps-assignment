#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0, spaces = 0, digits = 0, others = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
   
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    
    printf("Input string: \"%s\"\n", str);
    
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        
        if (isalpha(str[i])) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(str[i])) {
            digits++;
        } else if (str[i] == ' ') {
            spaces++;
        } else {
            others++;
        }
    }
    
    printf("\nCharacter Analysis:\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Other characters: %d\n", others);
    printf("Total characters: %d\n", vowels + consonants + digits + spaces + others);
    
    
    printf("\nVowels found: ");
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c ", str[i]);
        }
    }
    
    printf("\nConsonants found: ");
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (isalpha(str[i]) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            printf("%c ", str[i]);
        }
    }
    printf("\n");
    
    return 0;
}
