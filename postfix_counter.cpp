#include <iostream>
using namespace std;
class Counter{protected:int count;public:Counter():count(0){}void operator++(){++count;}int get(){return count;}};
class Counter2:public Counter{public:Counter operator++(int){Counter t=*this;count++;return t;}};
int main(){Counter2 c;c++;cout<<c.get();return 0;}