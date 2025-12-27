#include<iostream>
using namespace std; class date{int d,m,y;public:void get(){char c;cin>>m>>c>>d>>c>>y;} void show(){cout<<m<<"/"<<d<<"/"<<y;} }; int main(){date d; d.get(); d.show();}