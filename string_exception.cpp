#include <iostream>
#include <cstring>
using namespace std;
class StringError{};
class String{
    char str[20];
public:
    String(const char s[]){
        if(strlen(s)>=20) throw StringError();
        strcpy(str,s);
    }
    String operator+(String s){
        if(strlen(str)+strlen(s.str)>=20) throw StringError();
        String t("");
        strcpy(t.str,str);
        strcat(t.str,s.str);
        return t;
    }
    void show(){ cout<<str; }
};
int main(){
    try{
        String a("Hello"),b("World");
        String c=a+b;
        c.show();
    }catch(...){
        cout<<"String too long";
    }
    return 0;
}