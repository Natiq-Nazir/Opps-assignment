#include <stdio.h>

int main(){
    int A[2][2]={{1,2},{3,4}};
    float Af[2][2]; double Ad[2][2];
    for(int i=0;i<2;i++) for(int j=0;j<2;j++){ Af[i][j]=A[i][j]; Ad[i][j]=A[i][j]; }
    printf("Matrix multiplication results int->float->double demonstration.\n");
    double res[2][2]={{0}};
    for(int i=0;i<2;i++) for(int j=0;j<2;j++) for(int k=0;k<2;k++) res[i][j]+=Ad[i][k]*Ad[k][j];
    printf("Result[0][0]=%.2f\n",res[0][0]);
    return 0;
}
