#include <iostream>
using namespace std;
template <class T>
T amax(T arr[],int n){
    T m=arr[0];
    for(int i=1;i<n;i++)
        if(arr[i]>m) m=arr[i];
    return m;
}
int main(){
    int a[]={3,7,2,9};
    cout<<amax(a,4);
    return 0;
}