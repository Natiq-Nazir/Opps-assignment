#include <iostream>
using namespace std;

class Array {
    int* arr;
    int size;
public:
    Array(int s){
        size=s;
        arr=new int[size];
    }
    Array(const Array& a){
        size=a.size;
        arr=new int[size];
        for(int i=0;i<size;i++) arr[i]=a.arr[i];
    }
    Array& operator=(const Array& a){
        if(this==&a) return *this;
        delete[] arr;
        size=a.size;
        arr=new int[size];
        for(int i=0;i<size;i++) arr[i]=a.arr[i];
        return *this;
    }
    int& operator[](int i){ return arr[i]; }
    ~Array(){ delete[] arr; }
};

int main(){
    Array a1(5);
    for(int i=0;i<5;i++) a1[i]=i*i;
    Array a2=a1;
    Array a3(5);
    a3=a1;
    cout<<a2[3]<<" "<<a3[3]<<endl;
    return 0;
}