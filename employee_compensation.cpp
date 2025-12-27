#include <iostream>
using namespace std;
enum period{hourly,weekly,monthly};
class employee{protected:int id;public:void getdata(){cin>>id;}};
class employee2:public employee{double comp;period p;public:void getdata(){employee::getdata();int x;cin>>comp>>x;p=period(x);}void putdata(){cout<<id<<" "<<comp<<" "<<p<<endl;}};
int main(){employee2 e;e.getdata();e.putdata();return 0;}