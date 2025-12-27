#include <iostream>
using namespace std;

class Token {
public:
    virtual float value()=0;
};

class Number: public Token {
    float num;
public:
    Number(float n):num(n){}
    float value(){ return num; }
};

int main(){
    Token* t=new Number(3.14);
    cout<<t->value()<<endl;
    return 0;
}