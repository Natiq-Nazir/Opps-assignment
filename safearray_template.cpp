#include <iostream>
using namespace std;
template <class T>
class safearray{
    T arr[10];
public:
    T& operator[](int i){
        if(i<0||i>=10){ cout<<"Index error"; exit(1); }
        return arr[i];
    }
};
int main(){
    safearray<int> s;
    s[0]=100;
    cout<<s[0];
    return 0;
}