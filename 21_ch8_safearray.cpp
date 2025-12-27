#include<iostream>
using namespace std; class S{int a[10];public:int& operator[](int i){return a[i];}}; int main(){S s; s[0]=5; cout<<s[0];}