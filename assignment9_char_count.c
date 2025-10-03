#include <stdio.h>

int main(){
    char s[200]; printf("Enter string: ");
    fgets(s,200,stdin);
    int uc=0,lc=0,d=0,ws=0,sp=0;
    for(int i=0;s[i];i++){
        char c=s[i];
        if(c>='A'&&c<='Z') uc++;
        else if(c>='a'&&c<='z') lc++;
        else if(c>='0'&&c<='9') d++;
        else if(c==' '||c=='\t'||c=='\n') ws++;
        else sp++;
    }
    printf("Upper=%d Lower=%d Digits=%d WS=%d Special=%d\n",uc,lc,d,ws,sp);
    return 0;
}
