#include <iostream>
#include <cstring>
using namespace std;

class publication {
protected:
    char title[50];
    float price;
public:
    virtual void getdata() {
        cin >> title >> price;
    }
    virtual void putdata() {
        cout << title << " " << price << endl;
    }
};

class book : public publication {
    int pages;
public:
    void getdata() {
        publication::getdata();
        cin >> pages;
    }
    void putdata() {
        publication::putdata();
        cout << pages << endl;
    }
};

class tape : public publication {
    float time;
public:
    void getdata() {
        publication::getdata();
        cin >> time;
    }
    void putdata() {
        publication::putdata();
        cout << time << endl;
    }
};

int main() {
    publication* pub[2];
    pub[0] = new book;
    pub[1] = new tape;
    for(int i=0;i<2;i++) pub[i]->getdata();
    for(int i=0;i<2;i++) pub[i]->putdata();
    return 0;
}