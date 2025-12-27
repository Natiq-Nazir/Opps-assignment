#include <iostream>
using namespace std;

class bMoney {
    long double money;
public:
    bMoney(long double m=0):money(m){}
    friend bMoney operator*(long double, bMoney);
    void show(){ cout<<"$"<<money<<endl; }
};

bMoney operator*(long double x, bMoney b){
    return bMoney(x*b.money);
}

int main(){
    bMoney m(20.5);
    bMoney r=5*m;
    r.show();
    return 0;
}