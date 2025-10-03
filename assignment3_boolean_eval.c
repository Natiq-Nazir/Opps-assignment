#include <stdio.h>

int AND(int a,int b){return a&&b;}
int OR(int a,int b){return a||b;}
int NOT(int a){return !a;}
int XOR(int a,int b){return (a&&!b)||(!a&&b);}

int main(){
    int a,b,c;
    printf("Enter three boolean values (0/1): ");
    scanf("%d%d%d",&a,&b,&c);
    printf("a AND b = %d\n", AND(a,b));
    printf("a OR b = %d\n", OR(a,b));
    printf("NOT a = %d\n", NOT(a));
    printf("a XOR b = %d\n", XOR(a,b));
    printf("Truth table for 3 vars (A,B,C -> A AND B OR C):\n");
    for(int i=0;i<2;i++) for(int j=0;j<2;j++) for(int k=0;k<2;k++)
        printf("%d %d %d -> %d\n",i,j,k, OR(AND(i,j),k));
    return 0;
}
