#include <iostream>
using namespace std;
class Overflow{};
class Underflow{};
template <class T>
class Queue{
    T q[5];
    int head,tail,count;
public:
    Queue():head(0),tail(0),count(0){}
    void push(T v){
        if(count==5) throw Overflow();
        q[tail++]=v; count++;
    }
    T pop(){
        if(count==0) throw Underflow();
        count--; return q[head++];
    }
};
int main(){
    Queue<int> q;
    try{
        q.push(10); q.push(20);
        cout<<q.pop()<<endl;
    }catch(...){
        cout<<"Queue error";
    }
    return 0;
}