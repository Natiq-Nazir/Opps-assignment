#include <iostream>
using namespace std;
class RangeError{
public:int idx;
    RangeError(int i):idx(i){}
};
class safearray{
    int arr[5];
public:
    int& operator[](int i){
        if(i<0||i>=5) throw RangeError(i);
        return arr[i];
    }
};
int main(){
    safearray a;
    try{
        a[7]=10;
    }catch(RangeError e){
        cout<<"Invalid index "<<e.idx;
    }
    return 0;
}