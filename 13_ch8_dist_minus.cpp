#include<iostream>
using namespace std; class D{int f;public:D(int a=0):f(a){} D operator-(D d){return D(f-d.f);} void show(){cout<<f;} }; int main(){D a(10),b(3); D c=a-b; c.show();}