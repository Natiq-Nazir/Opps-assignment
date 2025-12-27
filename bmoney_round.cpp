#include <iostream>
#include <cmath>
using namespace std;

class bMoney {
public:
    long double money;
    bMoney(long double m=0):money(m){}
};

bMoney roundMoney(bMoney b){
    long double ip;
    long double frac=modfl(b.money,&ip);
    if(frac>=0.5) ip++;
    return bMoney(ip);
}

int main(){
    bMoney m(10.75);
    bMoney r=roundMoney(m);
    cout<<r.money<<endl;
    return 0;
}