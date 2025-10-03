#include <stdio.h>

int main(){
    int i=5; float f=3.2; double d=2.0;
    double result = i + f * d;
    printf("Expression: %d + %.1f * %.1f = %.2f\n", i,f,d,result);
    return 0;
}
