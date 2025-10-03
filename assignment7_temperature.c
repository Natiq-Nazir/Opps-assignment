#include <stdio.h>

double CtoF(double c){return c*9/5+32;}
double CtoK(double c){return c+273.15;}

int main(){
    double c=100;
    printf("%.2f C = %.2f F, %.2f K\n", c,CtoF(c),CtoK(c));
    float cf=1e-6; printf("Precision test float=%.10f double=%.10lf\n", cf,(double)cf);
    return 0;
}
