#include <iostream>
using namespace std;
class publication{protected:float price;public:void getdata(){cin>>price;}void putdata(){cout<<price<<endl;}};
class disk:public publication{char type;public:void getdata(){publication::getdata();cin>>type;}void putdata(){publication::putdata();cout<<(type=='c'?'C':'D')<<endl;}};
int main(){disk d;d.getdata();d.putdata();return 0;}