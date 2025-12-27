#include <iostream>
using namespace std;
class date{int d,m,y;public:void get(){cin>>m>>d>>y;}void show(){cout<<m<<"/"<<d<<"/"<<y<<endl;}};
class publication2{protected:date pub;public:void getdata(){pub.get();}void putdata(){pub.show();}};
int main(){publication2 p;p.getdata();p.putdata();return 0;}