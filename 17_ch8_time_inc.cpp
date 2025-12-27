#include<iostream>
using namespace std; class T{int s;public:T(int x=0):s(x){} T operator++(){s++;return *this;} void show(){cout<<s;} }; int main(){T t(5); ++t; t.show();}