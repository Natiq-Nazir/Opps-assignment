#include <stdio.h>
#include <string.h>

int str_len(char *s){int i=0; while(s[i]!='\0') i++; return i;}
void str_rev(char *s){int n=str_len(s); for(int i=0;i<n/2;i++){char t=s[i];s[i]=s[n-1-i];s[n-1-i]=t;}}
void str_sub(char *s,int start,int len){for(int i=0;i<len&&s[start+i]!='\0';i++) putchar(s[start+i]); printf("\n");}
void str_cat(char *a,char *b,char *out){int i=0; while(a[i]){out[i]=a[i];i++;} int j=0; while(b[j]){out[i++]=b[j++];} out[i]='\0';}
int str_freq(char *s,char c){int count=0; for(int i=0;s[i];i++) if(s[i]==c) count++; return count;}

int main(){
    char s[100]="Programming";
    printf("Length: %d\n", str_len(s));
    str_rev(s); printf("Reverse: %s\n", s);
    printf("Substring (2,5): "); str_sub(s,2,5);
    char cat[200]; str_cat("Hello","World",cat); printf("Concat: %s\n",cat);
    printf("Frequency of 'g': %d\n", str_freq(s,'g'));
    return 0;
}
