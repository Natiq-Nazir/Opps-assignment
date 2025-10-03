#include <stdio.h>
#include <float.h>

int main(){
    float a=1e10, b=3.14, c=2.71;
    float r1=(a*b)/c;
    float r2=(a/c)*b;
    printf("(a*b)/c = %.7f\n(a/c)*b = %.7f\n", r1,r2);
    printf("Float epsilon: %g\n", FLT_EPSILON);
    printf("Double epsilon: %g\n", DBL_EPSILON);
    return 0;
}
