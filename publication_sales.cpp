#include <iostream>
using namespace std;
class publication{protected:float price;public:void getdata(){cin>>price;}void putdata(){cout<<price<<endl;}};
class sales{protected:float s[3];public:void getdata(){for(int i=0;i<3;i++)cin>>s[i];}void putdata(){for(int i=0;i<3;i++)cout<<s[i]<<" ";cout<<endl;}};
class book:public publication,public sales{int pages;public:void getdata(){publication::getdata();sales::getdata();cin>>pages;}void putdata(){publication::putdata();sales::putdata();cout<<pages<<endl;}};
int main(){book b;b.getdata();b.putdata();return 0;}