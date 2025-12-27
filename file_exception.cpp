#include <iostream>
#include <fstream>
using namespace std;
class FileError{};
class dofile{
    fstream f;
public:
    dofile(const char* name){
        f.open(name,ios::in|ios::out|ios::trunc);
        if(!f) throw FileError();
    }
    void write(const char* s){ f<<s<<endl; }
    void read(){
        string line;
        f.seekg(0);
        while(getline(f,line)) cout<<line<<endl;
    }
};
int main(){
    try{
        dofile d("test.txt");
        d.write("Hello File");
        d.read();
    }catch(...){
        cout<<"File error";
    }
    return 0;
}