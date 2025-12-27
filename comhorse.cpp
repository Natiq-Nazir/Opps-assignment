#include <iostream>
using namespace std;

class horse {
public:
    float pos;
    horse():pos(0){}
    virtual void tick(){ pos+=1; }
};

class comhorse: public horse {
public:
    void tick(){ pos+=1.5; }
};

int main(){
    horse* h=new comhorse;
    for(int i=0;i<5;i++) h->tick();
    cout<<h->pos<<endl;
    return 0;
}