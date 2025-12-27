#include<iostream>
#include<cstring>
using namespace std; class S{char s[50];public:S(const char*x=""){strcpy(s,x);} S& operator+=(S o){strcat(s,o.s);return *this;} void show(){cout<<s;} }; int main(){S a("Hi "),b("All"); a+=b; a.show();}