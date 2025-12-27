#include <iostream>
using namespace std;
template <class T>
void swaps(T &a,T &b){
    T t=a; a=b; b=t;
}
int main(){
    int x=5,y=10;
    swaps(x,y);
    cout<<x<<" "<<y;
    return 0;
}