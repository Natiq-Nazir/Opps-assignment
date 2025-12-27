#include <iostream>
using namespace std;
struct pair2{int x,y;};
class Stack{protected:int a[20],top;public:Stack():top(-1){}void push(int v){a[++top]=v;}int pop(){return a[top--];}};
class pairStack:public Stack{public:void push(pair2 p){Stack::push(p.x);Stack::push(p.y);}pair2 pop(){pair2 p;p.y=Stack::pop();p.x=Stack::pop();return p;}};
int main(){pairStack ps;pair2 p={10,20};ps.push(p);pair2 q=ps.pop();cout<<q.x<<" "<<q.y;return 0;}