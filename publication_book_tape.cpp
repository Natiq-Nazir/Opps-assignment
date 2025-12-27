#include <iostream>
#include <cstring>
using namespace std;
class publication{protected:char title[50];float price;public:void getdata(){cin>>title>>price;}void putdata(){cout<<title<<" "<<price<<endl;}};
class book:public publication{int pages;public:void getdata(){publication::getdata();cin>>pages;}void putdata(){publication::putdata();cout<<pages<<endl;}};
class tape:public publication{float time;public:void getdata(){publication::getdata();cin>>time;}void putdata(){publication::putdata();cout<<time<<endl;}};
int main(){book b;tape t;b.getdata();t.getdata();b.putdata();t.putdata();return 0;}