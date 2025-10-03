#include <stdio.h>
#include <string.h>

void caesar(char *s,int shift){
    for(int i=0;s[i];i++){
        char c=s[i];
        if(c>='A'&&c<='Z') s[i] = (c-'A'+shift)%26+'A';
        else if(c>='a'&&c<='z') s[i] = (c-'a'+shift)%26+'a';
    }
}
void xor_cipher(char *s,char key){
    for(int i=0;s[i];i++) s[i]^=key;
}

int main(){
    char text[100]="Hello";
    printf("Original: %s\n",text);
    caesar(text,3); printf("Caesar: %s\n",text);
    xor_cipher(text,'K'); printf("XOR: %s\n",text);
    for(int i=0;text[i];i++) printf("Char %c ASCII %d\n", text[i], text[i]);
    return 0;
}
