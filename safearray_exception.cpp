#include <iostream>
using namespace std;
class RangeError{};
class safearray{
    int arr[5];
public:
    int& operator[](int i){
        if(i<0||i>=5) throw RangeError();
        return arr[i];
    }
};
int main(){
    safearray a;
    try{
        a[6]=10;
    }catch(...){
        cout<<"Out of range";
    }
    return 0;
}