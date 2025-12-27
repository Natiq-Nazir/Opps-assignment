#include<iostream>
using namespace std; class T{int s;public:T(int x=0):s(x){} T operator-(T t){return T(s-t.s);} }; int main(){T a(10),b(3); T c=a-b;}