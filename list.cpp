#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int d):data(d),next(NULL){}
};

class list {
    node* head;
public:
    list():head(NULL){}
    list(const list& l){
        head=NULL;
        node* t=l.head;
        while(t){ insert(t->data); t=t->next; }
    }
    void insert(int d){
        node* n=new node(d);
        n->next=head;
        head=n;
    }
    void show(){
        node* t=head;
        while(t){ cout<<t->data<<" "; t=t->next; }
        cout<<endl;
    }
};

int main(){
    list l1;
    l1.insert(10);
    l1.insert(20);
    list l2=l1;
    l2.show();
    return 0;
}