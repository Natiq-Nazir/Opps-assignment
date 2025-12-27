#include<iostream>
using namespace std; class Int{int x;public:Int(int a=0):x(a){} void add(Int a,Int b){x=a.x+b.x;} void show(){cout<<x;}}; int main(){Int a(10),b(20),c;c.add(a,b);c.show();}