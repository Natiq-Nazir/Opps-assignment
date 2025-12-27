#include <iostream>
using namespace std;
class DistError{
public: const char* msg;
    DistError(const char* m):msg(m){}
};
class Distance{
    int f; float i;
public:
    Distance(int ft,float in){
        if(in<0||in>=12) throw DistError("Inches out of range");
        f=ft; i=in;
    }
};
int main(){
    try{
        Distance d(5,15);
    }catch(DistError e){
        cout<<e.msg;
    }
    return 0;
}