#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2;i<=sqrt(n);i++) if(n%i==0) return false;
    return true;
}
bool isArmstrong(int n){
    int temp=n, sum=0, digits=0;
    while(temp){digits++; temp/=10;}
    temp=n;
    while(temp){int d=temp%10; sum+=pow(d,digits); temp/=10;}
    return sum==n;
}
bool isPalindrome(int n){
    int rev=0,temp=n;
    while(temp){rev=rev*10+temp%10; temp/=10;}
    return rev==n;
}
int factorial(int n){
    if(n<=1) return 1;
    return n*factorial(n-1);
}
int main() {
    int choice, num;
    do{
        cout << "\n1. Factorial\n2. Prime Check\n3. Armstrong Check\n4. Palindrome Check\n5. Exit\nChoice: ";
        cin >> choice;
        if(choice==5) break;
        cout << "Enter number: "; cin >> num;
        switch(choice){
            case 1: cout << "Factorial: " << factorial(num) << "\n"; break;
            case 2: cout << (isPrime(num)?"Prime":"Not Prime") << "\n"; break;
            case 3: cout << (isArmstrong(num)?"Armstrong":"Not Armstrong") << "\n"; break;
            case 4: cout << (isPalindrome(num)?"Palindrome":"Not Palindrome") << "\n"; break;
            default: cout << "Invalid choice\n";
        }
    }while(choice!=5);
    return 0;
}