#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num == 0) {
        cout << "Zero\n";
    } else if(num > 0) {
        if(num % 2 == 0)
            cout << "Positive Even\n";
        else
            cout << "Positive Odd\n";
    } else {
        if(num % 2 == 0)
            cout << "Negative Even\n";
        else
            cout << "Negative Odd\n";
    }
    return 0;
}