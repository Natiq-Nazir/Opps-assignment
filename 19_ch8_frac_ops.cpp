#include<iostream>
using namespace std; class F{int n,d;public:F(int a=0,int b=1):n(a),d(b){} F operator+(F f){return F(n*f.d+f.n*d,d*f.d);} }; int main(){F a(1,2),b(1,3); F c=a+b;}