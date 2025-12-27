#include <iostream>
using namespace std;
class manager{protected:int salary;public:void getdata(){cin>>salary;}};
class executive:public manager{int bonus,shares;public:void getdata(){manager::getdata();cin>>bonus>>shares;}void putdata(){cout<<salary<<" "<<bonus<<" "<<shares<<endl;}};
int main(){executive e;e.getdata();e.putdata();return 0;}