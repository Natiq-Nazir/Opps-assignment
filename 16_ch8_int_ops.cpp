#include<iostream>
using namespace std; class I{long x;public:I(long a=0):x(a){} I operator+(I i){return I(x+i.x);} void show(){cout<<x;} }; int main(){I a(5),b(6); I c=a+b; c.show();}