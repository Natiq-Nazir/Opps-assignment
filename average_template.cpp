#include <iostream>
using namespace std;
template <class T>
T average(T arr[], int size){
    T sum=0;
    for(int i=0;i<size;i++) sum+=arr[i];
    return sum/size;
}
int main(){
    int a[]={1,2,3,4,5};
    double b[]={1.5,2.5,3.5};
    cout<<average(a,5)<<endl;
    cout<<average(b,3)<<endl;
    return 0;
}