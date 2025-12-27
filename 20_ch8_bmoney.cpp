#include<iostream>
using namespace std; class B{double m;public:B(double x=0):m(x){} B operator+(B b){return B(m+b.m);} }; int main(){B a(5),b(6); B c=a+b;}