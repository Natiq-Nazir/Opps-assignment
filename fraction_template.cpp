#include <iostream>
using namespace std;
template <class T>
class frac{
    T n,d;
public:
    frac(T a=0,T b=1):n(a),d(b){}
    frac operator+(frac f){
        return frac(n*f.d+f.n*d,d*f.d);
    }
    void show(){ cout<<n<<"/"<<d; }
};
int main(){
    frac<int> f1(1,2),f2(1,3);
    frac<int> f3=f1+f2;
    f3.show();
    return 0;
}