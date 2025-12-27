#include<iostream>
using namespace std; class T{int s;public:T(int x=0):s(x){} T operator+(T t){return T(s+t.s);} void show(){cout<<s;} }; int main(){T a(10),b(20); T c=a+b; c.show();}