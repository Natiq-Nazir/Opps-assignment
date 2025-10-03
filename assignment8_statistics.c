#include <stdio.h>
#include <math.h>

int main(){
    int n; printf("Enter count: "); scanf("%d",&n);
    double arr[100]; for(int i=0;i<n;i++) scanf("%lf",&arr[i]);
    double sum=0; for(int i=0;i<n;i++) sum+=arr[i];
    double mean=sum/n; printf("Mean=%.2f\n",mean);
    double var=0; for(int i=0;i<n;i++) var+=(arr[i]-mean)*(arr[i]-mean);
    var/=n; printf("Variance=%.2f Stddev=%.2f\n",var,sqrt(var));
    return 0;
}
