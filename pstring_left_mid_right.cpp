#include <iostream>
#include <cstring>
using namespace std;
class Pstring{protected:char str[80];};
class Pstring2:public Pstring{public:Pstring2 left(Pstring2 s,int n){strncpy(str,s.str,n);str[n]='\0';return *this;}};
int main(){Pstring2 s1,s2;strcpy(s1.str,"HELLO");s2=s2.left(s1,3);cout<<s2.str;return 0;}