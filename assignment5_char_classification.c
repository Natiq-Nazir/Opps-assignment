#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a single character: ");
    if (scanf(" %c", &ch)!=1) return 0;
    if (isalpha((unsigned char)ch)) {
        switch (ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                printf("Lowercase vowel\n"); break;
            case 'A': case 'E': case 'I': case 'O': case 'U':
                printf("Uppercase vowel\n"); break;
            default:
                printf("Consonant\n");
        }
    } else if (isdigit((unsigned char)ch)) {
        printf("Digit\n");
    } else {
        printf("Special character\n");
    }
    return 0;
}
