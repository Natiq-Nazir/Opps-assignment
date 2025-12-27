#include <iostream>
using namespace std;
template <class T>
class Queue{
    T q[10];
    int head,tail;
public:
    Queue():head(0),tail(0){}
    void push(T v){ q[tail++]=v; }
    T pop(){ return q[head++]; }
};
int main(){
    Queue<int> q;
    q.push(10); q.push(20);
    cout<<q.pop()<<" "<<q.pop()<<endl;
    return 0;
}