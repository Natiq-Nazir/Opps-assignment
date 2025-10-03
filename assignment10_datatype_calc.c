#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    int a=1000000,b=2000; long long prod=(long long)a*b;
    if(prod>INT_MAX) printf("Warning: int overflow\n");
    printf("a*b=%lld\n",prod);
    float x=1e38f,y=10.0f; float z=x*y;
    if(z>FLT_MAX) printf("Warning: float overflow\n");
    printf("float result=%f\n",z);
    return 0;
}
