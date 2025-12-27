#include <iostream>
#include <cstring>
using namespace std;
const int SZ=80;
class String{protected:char str[SZ];public:String(const char s[]=""){strcpy(str,s);}void show(){cout<<str<<endl;}};
class Pstring:public String{public:Pstring(const char s[]){strncpy(str,s,SZ-1);str[SZ-1]='\0';}};
int main(){Pstring s("This string is too long and will be truncated safely");s.show();return 0;}