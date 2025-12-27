#include<iostream>
using namespace std; class test{static int c;int id;public:test(){id=++c;} void show(){cout<<id;} }; int test::c=0; int main(){test a,b,c; a.show(); b.show(); c.show();}