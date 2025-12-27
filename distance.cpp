#include <iostream>
using namespace std;

class Distance {
    float feet;
public:
    Distance(float f=0):feet(f){}
    friend Distance operator*(float, Distance);
    void show(){ cout<<feet<<" feet"<<endl; }
};

Distance operator*(float x, Distance d){
    return Distance(x*d.feet);
}

int main(){
    Distance d(10);
    Distance r = 7.5*d;
    r.show();
    return 0;
}